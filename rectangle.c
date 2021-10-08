#include <stdio.h>
#include "rectangle.h"

static void rectangle_draw(shape_t* const shape)
{
	printf("rectangle_draw\r\n");
	rectangle_t * const rectangle = (shape_t * const)shape;
	int x = shape_getx(shape);
	int y = shape_gety(shape);
	int w = rectangle_getw(rectangle);
	int h = rectangle_geth(rectangle);

	printf("x = %d, y = %d, w = %d, h = %d\r\n", x, y , w, h);
}

static int rectangle_area(shape_t* const shape)
{
	printf("rectangle_area\r\n");
	rectangle_t * const rectangle = (shape_t* const)shape;
	return rectangle->height * rectangle->height;
}

void rectangle_init(rectangle_t* const rectangle, int x, int y, int width, int height)
{
	/* 父类构造 */
	shape_init((shape_t*)rectangle, x, y);

	/* 重载父类的虚方法 （所谓虚方法就是：父类中声明了方法，但是抽象方法，或者说即使不是抽象方法，也是无效方法，需要在子类中被重载）*/
	struct shape_ops rectangle_ops=
	{
		.draw = rectangle_draw,
		.area = rectangle_area,
	};
	rectangle->shape.ops = &rectangle_ops;

	/* 子类构造 */
	rectangle->width = width;
	rectangle->height = height;
}

int rectangle_getw(rectangle_t* const rectangle)
{
	return rectangle->width;
}
int rectangle_geth(rectangle_t* const rectangle)
{
	return rectangle->height;
}