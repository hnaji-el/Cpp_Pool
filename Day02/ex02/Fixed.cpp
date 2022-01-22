 
#include "Fixed.hpp"
 
Fixed::Fixed(void) : _fixedPtVal(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* ----------------------------------------------------------------- */
/* ------------  Integer  -------  Fixed Point number  ------------- */
/* ----------------------------------------------------------------- */

Fixed::Fixed(int const nbI)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPtVal = nbI << this->_fracBits;
}

int	Fixed::toInt(void) const
{
	std::cout << "toInt()" << std::endl;//
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
	std::cout << "toFloat()" << std::endl;//
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
	std::cout << "Assignation operator called" << std::endl;
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
	std::cout << "getRawBits()" << std::endl;
	return (this->_fixedPtVal);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits()" << std::endl;
	this->_fixedPtVal = raw;
}

/* ----------------------------------------------------------- */
/* ----------------- Comparison Operators -------------------- */
/* ----------------------------------------------------------- */

bool	Fixed::operator>(Fixed const & rhs) const
{
	std::cout << "operator>()" << std::endl;
	return (this->_fixedPtVal > rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	std::cout << "operator>=()" << std::endl;
	return (this->_fixedPtVal >= rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	std::cout << "operator<()" << std::endl;
	return (this->_fixedPtVal < rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	std::cout << "operator<=()" << std::endl;
	return (this->_fixedPtVal <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	std::cout << "operator==()" << std::endl;
	return (this->_fixedPtVal == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	std::cout << "operator!=()" << std::endl;
	return (this->_fixedPtVal != rhs.getRawBits());
}

/* ----------------------------------------------------------- */
/* ----------------- Arithmethic Operators ------------------- */
/* ----------------------------------------------------------- */

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	std::cout << "operator+()" << std::endl;
	Fixed	result;

	result.setRawBits(this->_fixedPtVal + rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	std::cout << "operator-()" << std::endl;
	Fixed	result;

	result.setRawBits(this->_fixedPtVal - rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	std::cout << "operator*()" << std::endl;
	Fixed	result;

	result.setRawBits((this->_fixedPtVal * rhs.getRawBits()) >> this->_fracBits);
	return (result);
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	std::cout << "operator/()" << std::endl;
	Fixed	result;

	result.setRawBits((this->_fixedPtVal / rhs.getRawBits()) << this->_fracBits);
	return (result);
}

/* ----------------------------------------------------------- */
/* ----------  pre-increment  ---  post-increment  ----------- */
/* ----------  pre-decrement  ---  post-decrement  ----------- */
/* ----------------------------------------------------------- */

Fixed&	Fixed::operator++(void)
{
	std::cout << "operator++i()" << std::endl;
	this->_fixedPtVal++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	std::cout << "operatori++()" << std::endl;
	Fixed	copy(*this);

	this->_fixedPtVal++;
	return (copy);
}

Fixed&	Fixed::operator--(void)
{
	std::cout << "operator--i()" << std::endl;
	this->_fixedPtVal--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	std::cout << "operatori--()" << std::endl;
	Fixed	copy(*this);

	this->_fixedPtVal--;
	return (copy);
}

/* ----------------------------------------------------------- */

Fixed&	Fixed::min(Fixed& val1, Fixed& val2)
{
	if (val1 <= val2)
		return (val1);
	return (val2);
}

Fixed const & Fixed::min(Fixed const & val1, Fixed const & val2)
{
	if (val1 <= val2)
		return (val1);
	return (val2);
}

Fixed&	Fixed::max(Fixed& val1, Fixed& val2)
{
	if (val1 >= val2)
		return (val1);
	return (val2);
}

Fixed const & Fixed::max(Fixed const & val1, Fixed const & val2)
{
	if (val1 >= val2)
		return (val1);
	return (val2);
}

 
int const	Fixed::_fracBits = 8;

