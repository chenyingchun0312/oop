#include "shape.h"

void shape_init(shape_t* const shape, int x, int y)
{
	shape->x = x;
	shape->y = y;
}
void shape_move(shape_t* const shape, int dx, int dy)
{
	shape->x += dx;
	shape->y += dy;
}
int shape_getx(shape_t* const shape)
{
	return shape->x;
}
int shape_gety(shape_t* const shape)
{
	return shape->y;
}