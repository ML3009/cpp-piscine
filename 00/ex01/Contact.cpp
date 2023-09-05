/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:31:53 by mvautrot          #+#    #+#             */
/*   Updated: 2023/09/05 11:38:46 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

Contact::Contact ( void ) {

	std::cout << "Constructor called" <<std::endl;
	return ;

}

Contact::~Contact( void ){

	std::cout << "Destructor called" << std::endl;
	return ;
}

std::string	Contact::getfirstName ( void ) const{

	std::cout << "getfirstName : " << this->_firstName << std::endl;
	return this->_firstName;
}

void	Contact::setfirstName (std::string f) {

	if (f == "abc")
		this->_firstName = "def";
	else
		this->_firstName = "nul";
	std::cout << "setfirstName : " << this->_firstName << std::endl;

	return ;
}

