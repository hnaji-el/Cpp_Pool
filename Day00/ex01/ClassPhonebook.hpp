/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:40:21 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/11 10:51:32 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_H
# define CLASSPHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <cstdlib>

class Contact
{
public:
	std::string	firstN;
	std::string	lastN;
	std::string	nickN;
	std::string	phoneN;
	std::string darkestS;
};

class PhoneBook
{
public:
	PhoneBook(Contact *cnt);

	Contact	*cnt;
	int		nbContact;
	int		index;

	void 	addCmd(void);
	void 	searchCmd(void) const;
	void	showHead(void) const;
	void	showContact(void) const;
	void	incrNbContact(void);
	void	adjustIndex(void);
	std::string	adjustString(std::string str) const;
};

#endif







