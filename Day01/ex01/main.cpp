/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:41:51 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/13 10:57:45 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie;

    zombie = zombieHorde(5, "Jim");
    for (int i = 0; i < 5; i++)
        zombie[i].announce();
    delete [] zombie;
    return (0);
}