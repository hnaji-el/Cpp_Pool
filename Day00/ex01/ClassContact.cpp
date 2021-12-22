/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:35:13 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/22 21:59:20 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

void	Contact::setFirstN(std::string firstN)
{
	this->_firstN = firstN;
}

std::string	Contact::getFirstN(void) const
{
	return (this->_firstN);
}

void	Contact::setLastN(std::string lastN)
{
	this->_lastN = lastN;
}

std::string	Contact::getLastN(void) const
{
	return (this->_lastN);
}

void	Contact::setNickN(std::string nickN)
{
	this->_nickN = nickN;
}

std::string	Contact::getNickN(void) const
{
	return (this->_nickN);
}

void	Contact::setPhoneN(std::string phoneN)
{
	this->_phoneN = phoneN;
}

std::string	Contact::getPhoneN(void) const
{
	return (this->_phoneN);
}

void	Contact::setDarkestS(std::string darkestS)
{
	this->_darkestS = darkestS;
}

std::string	Contact::getDarkestS(void) const
{
	return (this->_darkestS);
}
