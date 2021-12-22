/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:40:21 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/12/22 21:59:15 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_H
# define CLASSPHONEBOOK_H

# include "ClassContact.hpp"

class PhoneBook
{
private:
	Contact	*_cnt;
	int		_nbContact;
	int		_index;

public:
	PhoneBook(Contact *cnt);

	void 	addCmd(void);
	void 	searchCmd(void) const;
	void	showHead(void) const;
	void	showContact(void) const;
	void	incrNbContact(void);
	void	adjustIndex(void);
	std::string	adjustString(std::string str) const;
};

#endif
