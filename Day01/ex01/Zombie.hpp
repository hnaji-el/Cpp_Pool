/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:50:09 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/13 11:10:51 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
private:
	std::string	_name;

public:
	Zombie(void);
	Zombie(std::string name); 
	~Zombie(void);

	void	announce(void) const;
	void	setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
