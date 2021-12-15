/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:31:17 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/15 00:01:01 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
    Karen   karen;
    
    karen.complain("ERROR");
    karen.complain("INFO");
    karen.complain("WARNING");
    karen.complain("DEBUG");
    return (0);
}