/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:31:23 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/15 13:02:30 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

# include <iostream>

class Karen
{
private:
    std::string _strLevel[4];
    void    (Karen::*_ptrFun[4])(void);

    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

public:
    Karen(void);
    ~Karen(void);

    void    complain(std::string level);
    int     getIndex(std::string level) const;
};

#endif