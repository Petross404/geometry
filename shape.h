#ifndef SHAPE_H
#define SHAPE_H

#include "space.h"

class Shape
{
public:
	Shape();
	virtual double area() = 0;
	virtual double widght() = 0;
	virtual double lenght() = 0;

	virtual double diameter() = 0;
	virtual double circumerence() = 0;
};



#endif // SHAPE_H
