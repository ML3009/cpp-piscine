/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:30:32 by mvautrot          #+#    #+#             */
/*   Updated: 2023/09/05 11:37:49 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact {

public:

	Contact( void );
	~Contact( void );

	std::string	getfirstName( void ) const;
	void	setfirstName (std::string f);

	/*std::string getlastName ( void ) const;
	void setlastName ( std::string l );

	std::string getnickName ( void ) const;
	void setnickName ( std::string n );

	int	getphoneNumber ( void ) const;
	void	setphoneNumber ( int p );

	std::string getdarkestSecret ( void ) const;
	void setdarkestSecret ( std::string d);*/

private :

	std::string	_firstName;
	//std::string	_lastName;
	//std::string	_nickName;
	//int			_phoneNumber;
	//std::string	_darkestSecret;

};

#endif
