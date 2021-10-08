#ifndef __SHAPE_H__
#define __SHAPE_H__

/* 前置声明 */
struct shape_ops;

struct shape
{
	int x;
	int y;

	struct shape_ops const *ops;
};

typedef struct shape shape_t;

struct shape_ops
{
	/* 绘制图像 */
	void (*draw)(shape_t* const shape);

	/* 计算面积 */
	int (*area)(shape_t* const shape);
};

void shape_init(shape_t* const shape, int x, int y);
void shape_move(shape_t* const shape, int dx, int dy);
int shape_getx(shape_t* const shape);
int shape_gety(shape_t* const shape);

static int inline shape_area(shape_t* const shape)
{
	return shape->ops->area(shape);
}

static void inline shape_draw(shape_t* const shape)
{
	shape->ops->draw(shape);
}

#endif // !__SHAPE_H__
