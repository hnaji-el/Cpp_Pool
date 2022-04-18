/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 02:18:40 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/14 18:25:58 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errorHandling.hpp"
#include <iostream>
#include <fstream>
#include <string>

void    replace(std::string& str, std::string const & s1, std::string const & s2)
{
    for (size_t found = 0; (found = str.find(s1, found)) != std::string::npos; found++)
    {
        str.erase(found, s1.length());
        str.insert(found, s2);
    }
}

int main(int argc, char **argv)
{
    std::ifstream   iStreamObj;
    std::ofstream   oStreamObj;
    std::string     str;

    if (!errorHandling(argc, argv, iStreamObj, oStreamObj))
        return (1);
    while (1)
    {
        std::getline(iStreamObj, str);
        replace(str, argv[2], argv[3]);
        oStreamObj << str;
        if (iStreamObj.eof() == true)
            break ;
        oStreamObj << std::endl;
    }

    return (0);
}

