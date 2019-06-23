#ifndef SPACE_H
#define SPACE_H

#include <tuple>

class Space {};

class X_axis : Space
{
public:
	X_axis ( double x_ ) : x ( x_ ) {};
	operator double() const;

protected:
	virtual double get_x_axis() const;
	virtual void set_x_axis ( double x_ );

private:
	double	x;
};

class Y_axis
{
public:
	Y_axis ( double y_ ) : y ( y_ ) {}
	operator double() const;

protected:
	virtual double get_y_axis() const;
	virtual void set_y_axis ( double y_ );

private:
	double	y;
};

class Point : public X_axis, public Y_axis
{
public:
	Point ( X_axis x_, Y_axis y_ )
        : X_axis ( x_ ), Y_axis ( y_ ), x ( x_ ), y ( y_ ) {};

	double get_x_axis() const override;
	double get_y_axis() const override;

	void set_x_axis ( double x_ ) override;
	void set_y_axis ( double y_ ) override;
private:
	X_axis	x;
	Y_axis	y;
};

class Line : public Point
{
public:
    Line ( X_axis x_, Y_axis y_, X_axis x__, Y_axis y__ )
        : Point ( x_, y_ ),
          m_p1 ( x_, y_ ),
          m_p2 ( x__, y__ ),
          m_X1 ( x_ ),
          m_X2 ( x__ ),
          m_Y1 ( y_ ),
          m_Y2 ( y__ )
	{};

    Line ( Point p_, Point p__ )
        : m_X1 ( p_.get_x_axis() ),
          m_X2 ( p__.get_x_axis() ),
          m_Y1 ( p_.get_y_axis() ),
          m_Y2 ( p__.get_y_axis() ),
          Point(m_X1, m_Y1),
          m_p1 ( m_X1, m_Y1 ),
          m_p2 ( m_X2, m_Y2 )
	{};

	virtual double length() const;
	virtual double slope()	const;
	virtual double x_len()	const;
	virtual double y_len()	const;
	virtual double dlt_x()	const;
	virtual double dlt_y()	const;
	virtual double a_asin()	const;

	Point start_point()	const;
	Point stop_point()	const;

private:
	X_axis	m_X1, m_X2;
	Y_axis	m_Y1, m_Y2;
	Point	m_p1, m_p2;
};
#endif // SPACE_H
