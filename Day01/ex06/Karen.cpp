/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:31:25 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/15 13:05:31 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
    std::cout << "Constructor called" << std::endl;
    this->_strLevel[0] = "DEBUG";
    this->_strLevel[1] = "INFO";
    this->_strLevel[2] = "WARNING";
    this->_strLevel[3] = "ERROR";
    this->_ptrFun[0] = &Karen::debug;
    this->_ptrFun[1] = &Karen::info;
    this->_ptrFun[2] = &Karen::warning;
    this->_ptrFun[3] = &Karen::error;
    return ;
}

Karen::~Karen(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void    Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my ";
    std::cout <<  "7XL-double-cheese-triple-pickle-special-ketchup ";
    std::cout << "burger. I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. ";
    std::cout << "You don’t put enough! If you did I would not have to ";
    std::cout << "ask for it!" << std::endl;
}

void    Karen::warning(void) 
{
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming here for years and you just started ";
    std::cout << "working here last month." << std::endl;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int     Karen::getIndex(std::string level) const
{
    for (size_t i = 0; i < 4; i++)
    {
        if (level == this->_strLevel[i])
            return (i);
    }
    return (-1);
}

void    Karen::complain(std::string level)
{
    switch (this->getIndex(level))
    {
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return ;
}
