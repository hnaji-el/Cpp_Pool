 
#include "Fixed.hpp"
 
Fixed::Fixed(void) : _fixedPtVal(0)
{
	std::cout << "Default constructor called" << std::endl;
}
 
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
 
Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
 
Fixed&	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPtVal = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPtVal);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPtVal = raw;
}

int const	Fixed::_fracBits = 8;
