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

class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook( void );

	void	searchUser(void) ;
	void	setaddUser ( void );
	void	addUser (void);

private:

	const int	id = 0;
	std::string **repo;
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;


};


#endif
