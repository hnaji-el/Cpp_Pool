/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:17:08 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/14 01:36:01 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
    std::cout << this->_name << " is entered" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << this->_name << " is died" << std::endl;
}

void    HumanB::attack(void) const
{
    std::cout << this->_name << " attacks with their "
		<< this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon *weapon)
{
    this->_weapon = weapon;
}

