/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 12:20:04 by hnaji-el          #+#    #+#             */
/*   Updated: 2022/01/07 21:39:41 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>
 
class Fixed
{
private:
	int	_fixedPtVal;
	static int const _nbFrBits;
 
public:
	Fixed(void);
	Fixed(int const nbI);
	Fixed(float const nbF);
	Fixed(Fixed const & src);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	int		toInt(void) const;
	float	toFloat(void) const;

	static Fixed&	min(Fixed& nb1, Fixed& nb2);
	static Fixed const &	min(Fixed const & nb1, Fixed const & nb2);
	static Fixed&	max(Fixed& nb1, Fixed& nb2);
	static Fixed const &	max(Fixed const & nb1, Fixed const & nb2);

	Fixed&	operator=(Fixed const & rhs);

	bool	operator>(Fixed const & rhs) const;
	bool	operator<(Fixed const & rhs) const;
	bool	operator>=(Fixed const & rhs) const;
	bool	operator<=(Fixed const & rhs) const;
	bool	operator==(Fixed const & rhs) const;
	bool	operator!=(Fixed const & rhs) const;

	Fixed	operator+(Fixed const & rhs) const;
	Fixed	operator-(Fixed const & rhs) const;
	Fixed	operator*(Fixed const & rhs) const;
	Fixed	operator/(Fixed const & rhs) const;

//	void	operator++(Fixed const & rhs);
//	void	operator++(Fixed const & rhs);
//	void	operator--(Fixed const & rhs);
//	void	operator--(Fixed const & rhs);
};

std::ostream&	operator<<(std::ostream& o,Fixed const & rhs);
 
#endif
