#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "shape.h"

struct rectangle
{
	/* �̳и��� */
	shape_t shape;	

	/* ������������ */
	int width;
	int height;
};

typedef struct rectangle rectangle_t;

void rectangle_init(rectangle_t* const rectangle, int x, int y, int width, int height);
int rectangle_getw(rectangle_t* const rectangle);
int rectangle_geth(rectangle_t* const rectangle);

#endif // !__RECTANGLE_H__
