/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 12:20:04 by hnaji-el          #+#    #+#             */
/*   Updated: 2022/01/07 14:14:04 by hnaji-el         ###   ########.fr       */
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

	int		toInt(void) const;
	float	toFloat(void) const;

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed&	operator=(Fixed const & rhs);
};

std::ostream&	operator<<(std::ostream& o,Fixed const & rhs);
 
#endif
