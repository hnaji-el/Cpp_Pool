/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 12:18:58 by hnaji-el          #+#    #+#             */
/*   Updated: 2022/01/07 14:13:37 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include "Fixed.hpp"
 
Fixed::Fixed(void) : _fixedPtVal(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const nbI)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPtVal = nbI << this->_nbFrBits;
	return ;
}

int	Fixed::toInt(void) const
{
	return (this->_fixedPtVal >> this->_nbFrBits);
}

Fixed::Fixed(float const nbF)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPtVal = (int)std::roundf(nbF * (1 << this->_nbFrBits));
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPtVal / (float)(1 << this->_nbFrBits));
}
 
Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixedPtVal);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPtVal = raw;
	return ;
}

Fixed&	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPtVal = rhs.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream& o,Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

int const	Fixed::_nbFrBits = 8;

