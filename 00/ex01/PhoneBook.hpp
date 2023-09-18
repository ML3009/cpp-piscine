/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:46:37 by mvautrot          #+#    #+#             */
/*   Updated: 2023/09/05 17:02:44 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook( void );

	void	searchUser(void) ;
	void	addUser (void);
	void	displayContact(void) const;

private:

	int	_index;
	Contact	_contact[8];

};


#endif
