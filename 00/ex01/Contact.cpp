/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:31:53 by mvautrot          #+#    #+#             */
/*   Updated: 2023/09/05 16:18:55 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact ( void ) {

	std::cout << "Constructor called" <<std::endl;

	return ;
}

Contact::~Contact( void ){

	std::cout << "Destructor called" << std::endl;

	return ;
}


void	Contact::getaddUser ( void ) const{

	std::cout << "first name : " << this->_firstName << std::endl;

	std::cout << "last name : " << this->_lastName << std::endl;

	std::cout << "nickname : " << this->_nickName << std::endl;

	std::cout << "phone number : " << this->_phoneNumber << std::endl;

	std::cout << "darkest secret : "<< this->_darkestSecret << std::endl;

	return ;
}


