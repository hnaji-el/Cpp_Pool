/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:38:27 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/13 22:57:09 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon&     _weapon;

public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA(void);

    void    attack(void) const;

};

#endif

