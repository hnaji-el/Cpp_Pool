/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:29:39 by hnaji-el          #+#    #+#             */
/*   Updated: 2022/01/07 23:29:12 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	a(2);
	Fixed	b(2);
	Fixed	c;

	c = a + b;
	std::cout << "c is: " << c.toInt() << std::endl;
//	Fixed		a;
//	Fixed const b(10);
//	Fixed const c(42.42f);
//	Fixed const d(b);
//
//	a = Fixed(1234.4321f);
//
//	std::cout << "a is " << a << std::endl;
//	std::cout << "b is " << b << std::endl;
//	std::cout << "c is " << c << std::endl;
//	std::cout << "d is " << d << std::endl;
//
//	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
//	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
//	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
//	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}
