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

Zombie*	newZombie(std::string name);
void 	randomChump(std::string name);

int	main(void)
{
	Zombie	*zombieA;
	Zombie	*zombieB;

	zombieA = newZombie("Jim");
	zombieB = newZombie("Rod");

	std::cout << "---------------------------------------" << std::endl;

	randomChump("Alex");
	std::cout << "---------------------------------------" << std::endl;
	randomChump("Stevan");

	std::cout << "---------------------------------------" << std::endl;

	zombieA->announce();
	zombieB->announce();

	std::cout << "---------------------------------------" << std::endl;

	delete zombieA;
	delete zombieB;

	return (0);
}
