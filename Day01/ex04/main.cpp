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

#include <fstream>
#include <iostream>
#include <string>
#include <cctype>

bool    put_error(int errorNum)
{
    if (errorNum == 1)
        std::cerr << "The Number of argument should be four arguments" << std::endl;
    if (errorNum == 2)
        std::cerr << "Error in the openning of the file" << std::endl;
    if (errorNum == 3)
        std::cerr << "Error: S1 and S2 should be NOT empty" << std::endl;
    return (false);
}

std::string getFilename(std::string orgFileN)
{
    for (size_t i = 0; i < orgFileN.length(); i++)
        orgFileN[i] = (char)toupper(orgFileN[i]);
    return (orgFileN += ".replace");
}

bool    errorHandling(int argc, char **argv, std::ifstream& ifs, std::ofstream& ofs)
{
    std::string filenameStr;
    
    if (argc != 4)
        return (put_error(1));
    if (!(*argv[2]) || !(*argv[3]))
        return (put_error(3));
    ifs.open(argv[1], std::ifstream::in);
    if (!ifs.good())
        return (put_error(2));
    filenameStr = getFilename(argv[1]);
    ofs.open(filenameStr, std::ifstream::out);
    if (!ifs.good())
        return (put_error(2));
    return (true);
}

void    replace(std::string& str, const std::string& s1, const std::string& s2)
{
    for (size_t found = 0; (found = str.find(s1, found)) != std::string::npos; found++)
    {
        str.erase(found, s1.length());
        str.insert(found, s2);
    }
    return ;
}

int main(int argc, char **argv)
{
    std::ifstream   ifs;
    std::ofstream   ofs;
    std::string     str;

    if (!errorHandling(argc, argv, ifs, ofs))
        return (1);
    while (1)
    {
        std::getline(ifs, str);
        replace(str, argv[2], argv[3]);
        ofs << str;
        if (ifs.eof())
            break ;
        ofs << std::endl;
    }
    return (0);
}