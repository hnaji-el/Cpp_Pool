/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 02:18:40 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/14 02:35:16 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
    argc = 1;
    std::ifstream   ifs(argv[1]);
    std::ofstream   ofs("FILE");
    
    
    return (0);
}