/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 12:20:04 by hnaji-el          #+#    #+#             */
/*   Updated: 2022/01/04 16:45:06 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
 
class Fixed
{
private:
	int	_fixedPtVal;
	static int const _nbFrBits;
 
public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const & src);
 
	Fixed&	operator=(Fixed const & rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
 
#endif
