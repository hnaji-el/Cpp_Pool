/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 12:25:49 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/22 21:59:18 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_H
# define CLASSCONTACT_H

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	std::string	_firstN;
	std::string	_lastN;
	std::string	_nickN;
	std::string	_phoneN;
	std::string _darkestS;

public:
	void	setFirstN(std::string firstN);
	void	setLastN(std::string lastN);
	void	setNickN(std::string nickN);
	void	setPhoneN(std::string phoneN);
	void	setDarkestS(std::string darkestS);

	std::string	getFirstN(void) const;
	std::string	getLastN(void) const;
	std::string	getNickN(void) const;
	std::string	getPhoneN(void) const;
	std::string	getDarkestS(void) const;
};

#endif
