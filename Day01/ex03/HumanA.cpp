/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:38:25 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/14 00:09:36 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
    std::cout << this->_name << " is entered" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << this->_name << " is died" << std::endl;
}

void    HumanA::attack(void) const
{
    std::cout << this->_name << " attacks with their "
		<< this->_weapon.getType() << std::endl;
}

