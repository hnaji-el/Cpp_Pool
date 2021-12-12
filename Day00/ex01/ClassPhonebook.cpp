/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:10:23 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/12 15:22:11 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"

PhoneBook::PhoneBook(Contact *cnt) : _cnt(cnt), _nbContact(0), _index(0)
{
	std::cout << "Enter <ADD> to add a new contact." << std::endl;
	std::cout << "Enter <SEARCH> to search for an contact." << std::endl;
	std::cout << "Enter <EXIT> to quit the program." << std::endl;
	std::cout << "..." << std::endl;
	return ;
}

void	PhoneBook::incrNbContact(void)
{
	if (this->_nbContact < 8)
		this->_nbContact++;
	return ;
}

void	PhoneBook::adjustIndex(void)
{
	this->_index = this->_nbContact;
	if (this->_index == 8)
		this->_index = 0;
}

void	PhoneBook::addCmd(void)
{
	std::string	str;

	std::cout << "... Enter a new contact's information ..." << std::endl;
	std::cout << "Enter first name    : ";  std::getline(std::cin, str);
	this->_cnt[this->_index].setFirstN(str);
	std::cout << "Enter last name     : ";  std::getline(std::cin, str);
	this->_cnt[this->_index].setLastN(str);
	std::cout << "Enter nickname      : ";  std::getline(std::cin, str);
	this->_cnt[this->_index].setNickN(str);
	std::cout << "Enter phone number  : ";  std::getline(std::cin, str);
	this->_cnt[this->_index].setPhoneN(str);
	std::cout << "Enter darkest secret: ";  std::getline(std::cin, str);
	this->_cnt[this->_index].setDarkestS(str);
	std::cout << "... The contact is added SUCCESSFULLY ..." << std::endl;
	this->incrNbContact();
	this->adjustIndex();
	return ;
}

void	PhoneBook::showContact(void) const
{
	int			indexNb;
	std::string	indexStr;

	std::cout << "Enter an index: ";
	std::getline(std::cin, indexStr);
	indexNb = std::atoi(indexStr.c_str());
	if (indexNb < 1 || indexNb > this->_nbContact)
	{
		std::cout << "The index is wrong." << std::endl;
		return ;
	}
	std::cout << " ... " << std::endl;
	std::cout << "first name    : " << _cnt[indexNb - 1].getFirstN() << std::endl;
	std::cout << "last name     : " << _cnt[indexNb - 1].getLastN() << std::endl;
	std::cout << "nickname      : " << _cnt[indexNb - 1].getNickN() << std::endl;
	std::cout << "phone number  : " << _cnt[indexNb - 1].getPhoneN() << std::endl;
	std::cout << "darkest secret: " << _cnt[indexNb - 1].getDarkestS() << std::endl;
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
	for (int i = 0; i < this->_nbContact; i++)
	{
		std::cout << std::left << std::setw(10) << i + 1 << " | ";
		std::cout << std::left << std::setw(10) << adjustString(_cnt[i].getFirstN()) << " | ";
		std::cout << std::left << std::setw(10) << adjustString(_cnt[i].getLastN()) << " | ";
		std::cout << std::left << std::setw(10) << adjustString(_cnt[i].getNickN()) << std::endl;
	}
	this->showContact();
	return ;
}
