/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:31:23 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/15 01:51:46 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

# include <iostream>

typedef enum e_logLev
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    INSIGNIFICANT
}            t_logLev;

class Karen
{
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

public:
    Karen(void);
    ~Karen(void);

    void complain(std::string level);
    t_logLev    hash(std::string level) const;
};

#endif