/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:10:23 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/11 10:51:28 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"

PhoneBook::PhoneBook(Contact *cnt) : cnt(cnt), nbContact(0), index(0)
{
	std::cout << "Enter <ADD> to add a new contact." << std::endl;
	std::cout << "Enter <SEARCH> to search for an contact." << std::endl;
	std::cout << "Enter <EXIT> to quit the program." << std::endl;
	std::cout << "..." << std::endl;
	return ;
}

void	PhoneBook::incrNbContact(void)
{
	if (this->nbContact < 8)
		this->nbContact++;
	return ;
}

void	PhoneBook::adjustIndex(void)
{
	this->index = this->nbContact;
	if (this->index == 8)
		this->index = 0;
}

void	PhoneBook::addCmd(void)
{
	std::cout << "... Enter a new contact's information ..." << std::endl;
	std::cout << "Enter first name    : ";  std::getline(std::cin, cnt[index].firstN);
	std::cout << "Enter last name     : ";  std::getline(std::cin, cnt[index].lastN);
	std::cout << "Enter nickname      : ";  std::getline(std::cin, cnt[index].nickN);
	std::cout << "Enter phone number  : ";  std::getline(std::cin, cnt[index].phoneN);
	std::cout << "Enter darkest secret: ";  std::getline(std::cin, cnt[index].darkestS);
	std::cout << "... The contact is added SUCCESSFULLY ..." << std::endl;
	this->incrNbContact();
	this->adjustIndex();
	return ;
}

void	PhoneBook::showContact(void) const
{
	int			index;
	std::string	indexStr;

	std::cout << "Enter an index: ";
	std::getline(std::cin, indexStr);
	index = std::atoi(indexStr.c_str());
	if (index < 1 || index > this->nbContact)
	{
		std::cout << "The index is wrong." << std::endl;
		return ;
	}
	std::cout << " ... " << std::endl;
	std::cout << "first name    : " << this->cnt[index - 1].firstN << std::endl;
	std::cout << "last name     : " << this->cnt[index - 1].lastN << std::endl;
	std::cout << "nickname      : " << this->cnt[index - 1].nickN << std::endl;
	std::cout << "phone number  : " << this->cnt[index - 1].phoneN << std::endl;
	std::cout << "darkest secret: " << this->cnt[index - 1].darkestS << std::endl;
	std::cout << " ... " << std::endl;
	return ;
}

std::string	PhoneBook::adjustString(std::string str) const
{
	std::string	adjStr;

	adjStr = str.substr(0, 10);
	if (str.length() > 10)
		adjStr[9] = '.';
	return (adjStr);
}

void	PhoneBook::showHead(void) const
{
	std::cout << std::left << std::setw(10) << "index" << " | ";
	std::cout << std::left << std::setw(10) << "first name" << " | ";
	std::cout << std::left << std::setw(10) << "last name" << " | ";
	std::cout << std::left << std::setw(10) << "nickname" << std::endl;
	return ;
}

void	PhoneBook::searchCmd(void) const
{
	this->showHead();
	for (int i = 0; i < this->nbContact; i++)
	{
		std::cout << std::left << std::setw(10) << i + 1 << " | ";
		std::cout << std::left << std::setw(10) << adjustString(cnt[i].firstN) << " | ";
		std::cout << std::left << std::setw(10) << adjustString(cnt[i].lastN) << " | ";
		std::cout << std::left << std::setw(10) << adjustString(cnt[i].nickN) << std::endl;
	}
	this->showContact();
	return ;
}
