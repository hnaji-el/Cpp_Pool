/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:31:25 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/15 01:55:02 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
    std::cout << "Constructor called" << std::endl;
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

t_logLev    Karen::hash(std::string level) const
{
    if (level == "DEBUG")
        return (DEBUG);
    else if (level == "INFO")
        return (INFO);
    else if (level == "WARNING")
        return (WARNING);
    else if (level == "ERROR")
        return (ERROR);
    else
        return (INSIGNIFICANT);
}

void    Karen::complain(std::string level)
{
    switch (this->hash(level))
    {
        case DEBUG:
            this->debug();
        case INFO:
            this->info();
        case WARNING:
            this->warning();
        case ERROR:
            this->error();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return ;
}
