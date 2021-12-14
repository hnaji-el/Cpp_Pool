/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:55:20 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/13 23:15:55 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
private:
    std::string _type;

public:
    Weapon(std::string type);
    ~Weapon(void);

    void    setType(std::string type);
    std::string const & getType(void) const;
};

#endif
