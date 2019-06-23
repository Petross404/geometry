#ifndef	FUNCTIONS_H
#define	FUNCTIONS_H

#include "space.h"

double a_asin(Point p1, Point p2)
{
	double delta_y = p2.get_y_axis() - p1.get_y_axis();
	double delta_x = p2.get_x_axis() - p1.get_x_axis();

	return delta_y / delta_x;
}

double a_sin(Line l)
{
	return l.dlt_y() / l.dlt_x();
}
#endif	//FUNCTIONS_H
