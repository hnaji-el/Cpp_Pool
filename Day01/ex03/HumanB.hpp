/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:15:54 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/14 01:36:09 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon*     _weapon;

public:
    HumanB(std::string name);
    ~HumanB(void);

    void    attack(void) const;
    void    setWeapon(Weapon *weapon);

};

#endif
