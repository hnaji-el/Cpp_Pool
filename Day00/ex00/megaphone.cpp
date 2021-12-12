/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:47:58 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/12 15:24:23 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int		index;
	int		i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (index = 1; index < argc; index++)
		for (i = 0; argv[index][i]; i++) 
			std::cout << (char)toupper(argv[index][i]);
	std::cout << std::endl;
	return (0);
}
