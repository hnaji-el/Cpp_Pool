/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:23:59 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/14 02:12:05 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon  sword = Weapon("Jian sword");
    Weapon  pike = Weapon("Melee pike");

    HumanA  jim("Jim", sword);
    {
        HumanB  bob("Bob");
        bob.setWeapon(&pike);
        bob.attack();
        pike.setType("Rune pike");
        bob.attack();
        jim.attack();
    }
    HumanB  bob("Bob");
    pike.setType("X pike");
    bob.setWeapon(&pike);
    bob.attack();
    jim.attack();
    
    // {
    //     Weapon  club = Weapon("crude spiked club");
    //     HumanA  bob("Bob", club);
    //     bob.attack();
    //     club.setType("some other type of club");
    //     bob.attack();
    // }
    // {
    //     Weapon  club = Weapon("crude spiked club");
    //     HumanB  jim("Jim");
    //     jim.setWeapon(&club);
    //     jim.attack();
    //     club.setType("some other type of club");
    //     jim.attack();
    // }
    return (0);
}
