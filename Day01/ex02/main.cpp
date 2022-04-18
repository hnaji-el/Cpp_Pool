/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:13:00 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/13 12:39:33 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string     string = "HI THIS IS BRAIN";
    std::string*    stringPTR = &string;
    std::string&    stringREF = string;

    std::cout << "the address in memory of the string: " << std::endl;

    std::cout << &string 	<< std::endl;
    std::cout << stringPTR 	<< std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << "the value of the string: " << std::endl;
	std::cout << string  	<< std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF 	<< std::endl;

    return (0);
}
