
#include "iter.hpp"
#include <iostream>
#include <string>

class Awesome
{
private:
	int _n;

public:
	Awesome( void ) : _n( 42 ) { }
	int	get( void ) const { return ( this->_n ); }

};

std::ostream&	operator<<(std::ostream& o, Awesome const & rhs)
{
	o << rhs.get();
	return (o);
}

template<typename T>
void	print(T const & x)
{
	std::cout << x << std::endl;
}

// main test ...

int	main(void)
{
	std::cout << "Iterate through an array of integers" << std::endl;

	int			arrInt[4] 	 = { 1, 2, 3, 4 };
	iter<int>(arrInt, 4, print<int>);
	std::cout << std::endl;


	std::cout << "Iterate through an array of strings" << std::endl;

	std::string	arrString[2] = { "Tesla", "Newton" };
	iter<std::string>(arrString, 2, print<std::string>);
	std::cout << std::endl;


	std::cout << "Iterate through an array of objects of Awesome" << std::endl;

	Awesome		arr[4];
	iter<Awesome>(arr, 4, print<Awesome>);

	return (0);
}

