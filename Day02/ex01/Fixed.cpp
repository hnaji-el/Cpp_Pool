 
#include "Fixed.hpp"
 
Fixed::Fixed(void) : _fixedPtVal(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* ------------------------------------------------------------------ */
/* -------------  Integer  -------  Fixed Point number  ------------- */
/* ------------------------------------------------------------------ */

Fixed::Fixed(int const nbI)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPtVal = nbI << this->_fracBits;
}

int	Fixed::toInt(void) const
{
	return (this->_fixedPtVal >> this->_fracBits);
}

/* ----------------------------------------------------------------- */
/* ----------  Floating Point  -----  Fixed Point number  ---------- */
/* ----------------------------------------------------------------- */

Fixed::Fixed(float const nbF)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPtVal = (int)std::roundf(nbF * (1 << this->_fracBits));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPtVal / (float)(1 << this->_fracBits));
}

/* ---------------------------------------------------------------- */

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
	return *this;
}

std::ostream&	operator<<(std::ostream& o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

int		Fixed::getRawBits(void) const
{
	return (this->_fixedPtVal);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPtVal = raw;
}

int const	Fixed::_fracBits = 8;

