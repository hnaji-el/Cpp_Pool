 
#include "Fixed.hpp"
 
Fixed::Fixed(void) : _fixedPtVal(0)
{
	return ;
}

/* ----------------------------------------------------------------- */
/* ------------  Integer  -------  Fixed Point number  ------------- */
/* ----------------------------------------------------------------- */

Fixed::Fixed(int const nbI)
{
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
	this->_fixedPtVal = (int)std::roundf(nbF * (1 << this->_fracBits));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPtVal / (float)(1 << this->_fracBits));
}

/* ---------------------------------------------------------------- */

Fixed::~Fixed(void)
{
	return ;
}
 
Fixed::Fixed(Fixed const & src)
{
	*this = src;
}
 
Fixed&	Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_fixedPtVal = rhs.getRawBits();
	return (*this);
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

/* ----------------------------------------------------------- */
/* ----------------- Comparison Operators -------------------- */
/* ----------------------------------------------------------- */

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->_fixedPtVal > rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_fixedPtVal >= rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->_fixedPtVal < rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_fixedPtVal <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->_fixedPtVal == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->_fixedPtVal != rhs.getRawBits());
}

/* ----------------------------------------------------------- */
/* ----------------- Arithmethic Operators ------------------- */
/* ----------------------------------------------------------- */

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	Fixed	result;

	result.setRawBits(this->_fixedPtVal + rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	Fixed	result;

	result.setRawBits(this->_fixedPtVal - rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	Fixed	result;

	result.setRawBits((this->_fixedPtVal * rhs.getRawBits()) >> this->_fracBits);
	return (result);
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	Fixed	result;

	result.setRawBits((this->_fixedPtVal << this->_fracBits) / rhs.getRawBits());
	return (result);
}

/* ----------------------------------------------------------- */
/* ----------  pre-increment  ---  post-increment  ----------- */
/* ----------  pre-decrement  ---  post-decrement  ----------- */
/* ----------------------------------------------------------- */

Fixed&	Fixed::operator++(void)
{
	this->_fixedPtVal++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	copy(*this);

	this->_fixedPtVal++;
	return (copy);
}

Fixed&	Fixed::operator--(void)
{
	this->_fixedPtVal--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
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

Fixed&	Fixed::min(Fixed const & val1, Fixed const & val2)
{
	if (val1 <= val2)
		return ((Fixed&)val1);
	return ((Fixed&)val2);
}

Fixed&	Fixed::max(Fixed& val1, Fixed& val2)
{
	if (val1 >= val2)
		return (val1);
	return (val2);
}

Fixed&	Fixed::max(Fixed const & val1, Fixed const & val2)
{
	if (val1 >= val2)
		return ((Fixed&)val1);
	return ((Fixed&)val2);
}

 
int const	Fixed::_fracBits = 8;

