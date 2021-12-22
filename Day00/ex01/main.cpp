/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 11:50:02 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/22 21:55:40 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"

int	main(void)
{
	Contact		contact[8];
	PhoneBook	phBook(contact);
	std::string	str;

	while (1)
	{
		std::getline(std::cin, str);
		if (str.compare("ADD") == 0)
			phBook.addCmd();
		else if (str.compare("SEARCH") == 0)
			phBook.searchCmd();
		else if (str.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
