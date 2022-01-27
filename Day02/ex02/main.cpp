
#include "Fixed.hpp"

int	main( void )
{
	std::cout << "              Arithmetic operators             " << std::endl;
	{
		Fixed	a(5.05f);
		Fixed	b(2);

		std::cout << " a     : " << a << std::endl;
		std::cout << " b     : " << b << std::endl;
		std::cout << "  -------- " << std::endl;
		std::cout << " a + b : " << a + b << std::endl;
		std::cout << " a - b : " << a - b << std::endl;
		std::cout << " a * b : " << a * b << std::endl;
		std::cout << " a / b : " << a / b << std::endl;
	}
	std::cout << "-----------------------------------------------" << std::endl;

	std::cout << "              Comparison operators             " << std::endl;
	{
		Fixed const		a(5.05f);
		Fixed const		b(2);

		std::cout << " a     : " << a << std::endl;
		std::cout << " b     : " << b << std::endl;
		std::cout << "  -------- " << std::endl;
		std::cout << " The biggest constant value is : "  << Fixed::max(a, b) << std::endl;
		std::cout << " The smallest constant value is: "  << Fixed::min(a, b) << std::endl;
	}
	{
		Fixed	a(5.05f);
		Fixed 	b(2);

		std::cout << " a     : " << a << std::endl;
		std::cout << " b     : " << b << std::endl;
		std::cout << "  -------- " << std::endl;
		std::cout << " The biggest value is          : "  << Fixed::max(a, b) << std::endl;
		std::cout << " The smallest value is         : "  << Fixed::min(a, b) << std::endl;
	}
	std::cout << "-----------------------------------------------" << std::endl;

	std::cout << "         Pre-increment AND Post-increment      " << std::endl;
	std::cout << "         Pre-decrement AND Post-decrement      " << std::endl;
	{
		Fixed	a;

		std::cout << " a   : " << a << std::endl;
		std::cout << " ++a : " << ++a << std::endl;
		std::cout << " a   : " << a << std::endl;
		std::cout << " a++ : " << a++ << std::endl;
		std::cout << " a   : " << a << std::endl;
		std::cout << " --a : " << --a << std::endl;
		std::cout << " a   : " << a << std::endl;
		std::cout << " a-- : " << a-- << std::endl;
		std::cout << " a   : " << a << std::endl;
	}
	std::cout << "-----------------------------------------------" << std::endl;

	std::cout << "-----------------------------------------------" << std::endl;
	{
		Fixed 			a;
		Fixed const		b(Fixed(5.05f) * Fixed(2));
	
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
	
		std::cout << b << std::endl;
	
		std::cout << Fixed::max(a, b) << std::endl;
	}
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	return (0);
}

