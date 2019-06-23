#include "space.h"
#include <math.h>

X_axis::operator double() const
{
	return this->x;
}

double X_axis::get_x_axis() const
{
	return this->x;
}

void X_axis::set_x_axis( double x_ )
{
	this->x = x_;
}

Y_axis::operator double() const
{
	return this->y;
}

double Y_axis::get_y_axis() const
{
	return this->y;
}

void Y_axis::set_y_axis( double y_ )
{
	y = y_;
}

double Point::get_x_axis() const
{
	return X_axis::get_x_axis();
}

double Point::get_y_axis() const
{
	return Y_axis::get_y_axis();
}

void Point::set_x_axis( double x_ )
{
	X_axis::set_x_axis( x_ );
}

void Point::set_y_axis( double y_ )
{
	Y_axis::set_y_axis( y_ );
}

double Line::length() const
{
	double d_ = pow( ( this->m_X2 - this->m_X1 ), 2 ) + pow( ( this->m_Y2 - this->m_Y1 ), 2 );
	return sqrt( d_ ); 	// return distance as length
}

double Line::slope() const
{
	return ( this->m_Y2 - this->m_Y1 ) / ( this->m_X2 - this->m_X1 );
}

double Line::x_len() const
{
	return this->m_X2 - this->m_X1;
}

double Line::y_len() const
{
	return this->m_Y2 - this->m_Y1;
}

double Line::a_asin() const
{
	double sin = this->length() / this->y_len();
	double a = asin(sin);
	return  a; 
}

double Line::dlt_x() const
{
	return m_X2 - m_X1;
}

double Line::dlt_y() const
{
	return m_Y2 - m_Y1;
}

Point Line::start_point() const
{
	return m_p1;
}

Point Line::stop_point() const
{
	return m_p2;
}

// kate: indent-mode cstyle; indent-width 8; replace-tabs off; tab-width 8; 
