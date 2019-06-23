#include <iostream>
#include "space.h"

int main()
{
	Point p( X_axis( 0 ), Y_axis( 4 ) );
	Point p2( X_axis( 10 ), Y_axis( 4 ) );

	Line l( p, p2 );
	Line l2( Point( 0, 20 ), Point( 0, 20 ) );

	std::cout << l.length() << std::endl
	          << l.slope() << std::endl
		  << l.a_asin() << std::endl;

	std::cout << l2.length() << std::endl
	          << l2.slope() << std::endl
	          << l2.a_asin() << std::endl;

	return 0;
}
// kate: indent-mode cstyle; indent-width 8; replace-tabs off; tab-width 8; 
