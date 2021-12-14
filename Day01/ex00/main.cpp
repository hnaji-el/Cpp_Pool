/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:26:57 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/13 10:35:39 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombieP1;
	Zombie	*zombieP2;

	zombieP1 = newZombie("Jim");
	zombieP2 = newZombie("Rod");
	randomChump("Jim");
	randomChump("Rod");
	delete zombieP1;
	delete zombieP2;
	return (0);
}
