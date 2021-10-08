#include <stdio.h>
#include <stdbool.h>

// #include "shape.h"
#include "rectangle.h"


int main(int argc, char* argv[])
{
	printf("hello world\r\n");

#if 0
	/* 仅作测试使用，因为父类是一个比较抽象的类，抽象类一般不会被实例化，而是被子类继承 */
	shape_t shape;
	shape_init(&shape, 10, 10);
	shape_move(&shape, 5, 5);

	int x = shape_getx(&shape);
	int y = shape_gety(&shape);

	printf("x = %d, y = %d\r\n", x, y);
#endif

#if 0 // 继承测试
	rectangle_t rectangle;
	rectangle_init(&rectangle, 10, 10, 20, 30);

	/* 子类继承了父类，父类的方法，子类也可以使用 */
	shape_move((shape_t*)&rectangle, 5, 5);
	int x = shape_getx((shape_t*)&rectangle);
	int y = shape_gety((shape_t*)&rectangle);
	printf("x = %d, y = %d\r\n", x, y);

	/* 调用子类独有的方法 */
	int w = rectangle_getw(&rectangle);
	int h = rectangle_geth(&rectangle);

	printf("w = %d, h = %d\r\n", w, h);
#endif

#if 1 // 多态测试
	rectangle_t rectangle;
	rectangle_init(&rectangle, 10, 10, 20, 30);

	/* 子类继承了父类，父类的方法，子类也可以使用 */
	shape_move((shape_t*)&rectangle, 5, 5);
	int x = shape_getx((shape_t*)&rectangle);
	int y = shape_gety((shape_t*)&rectangle);
	
	// printf("x = %d, y = %d\r\n", x, y);

	/* 调用子类独有的方法 */
	int w = rectangle_getw(&rectangle);
	int h = rectangle_geth(&rectangle);

	// printf("w = %d, h = %d\r\n", w, h);

	shape_draw((shape_t * const)&rectangle);
	shape_area((shape_t * const)&rectangle);


#endif

	while (true)
	{

	}
}