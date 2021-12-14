/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:56:06 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/13 23:15:59 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    std::cout << this->_type << " is created" << std::endl;
    return ;
}

Weapon::~Weapon(void)
{
    std::cout << this->_type << " is destroyed"<< std::endl;
    return ;
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
    return ;
}

std::string const & Weapon::getType(void) const
{
    return (this->_type);
}
