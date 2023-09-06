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

bool	hasOnlySpaces(std::string str) {

	for (std::string::const_iterator it = str.begin(); it != str.end(); it++)
		if (*it != ' ' && *it != '\t')
			return false;
	return true ;
}

void	Contact::setaddUser ( void ) {

	while (hasOnlySpaces(this->_firstName) == true)
		std::cout << "first name : ", std::getline(std::cin, this->_firstName);
	//if (this->_firstName.length() >= 10)
	//	this->_firstName.resize(10), this->_firstName[9] = '.';

	while (hasOnlySpaces(this->_lastName) == true)
		std::cout << "last name : ", std::getline(std::cin, this->_lastName);
	//if (this->_lastName.length() >= 10)
	//	this->_lastName.resize(10), this->_lastName[9] = '.';

	while (hasOnlySpaces(this->_nickName) == true)
		std::cout << "nickname : ", std::getline(std::cin, this->_nickName);
	//if (this->_nickName.length() >= 10)
	//	this->_nickName.resize(10), this->_nickName[9] = '.';

	while (hasOnlySpaces(this->_phoneNumber) == true)
		std::cout << "phone number : ", std::getline(std::cin, this->_phoneNumber);
	//if (this->_phoneNumber.length() >= 10)
	//	this->_phoneNumber.resize(10), this->_phoneNumber[9] = '.';

	while (hasOnlySpaces(this->_darkestSecret) == true)
		std::cout << "darkest secret : ", std::getline(std::cin, this->_darkestSecret);
	//if (this->_darkestSecret.length() >= 10)
	//	this->_darkestSecret.resize(10), this->_darkestSecret[9] = '.';

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


void	Contact::printUser ( void ) const{

	std::cout <<  this->_firstName << " | ";

	std::cout <<  this->_lastName << " | ";

	std::cout <<  this->_nickName << " | ";

	std::cout <<  this->_phoneNumber << " | ";

	std::cout << this->_darkestSecret << std::endl;

	return ;
}


