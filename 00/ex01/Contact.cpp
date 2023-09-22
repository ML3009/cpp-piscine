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

	//std::cout << "Constructor called" <<std::endl;
	return ;
}

Contact::~Contact( void ){

	//std::cout << "Destructor called" << std::endl;

	return ;
}

bool	hasOnlySpaces(std::string str) {

	for (std::string::const_iterator it = str.begin(); it != str.end(); it++)
		if (*it != ' ' && *it != '\t')
			return false;
	return true ;
}

void	Contact::setaddUser ( int index ) {

	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
	
	std::cout << "Contact n°" << index + 1 << std::endl;
	while (hasOnlySpaces(this->_firstName) == true)
		std::cout << "first name : ", std::getline(std::cin, this->_firstName);

	while (hasOnlySpaces(this->_lastName) == true)
		std::cout << "last name : ", std::getline(std::cin, this->_lastName);

	while (hasOnlySpaces(this->_nickName) == true)
		std::cout << "nickname : ", std::getline(std::cin, this->_nickName);

	while (hasOnlySpaces(this->_phoneNumber) == true)
		std::cout << "phone number : ", std::getline(std::cin, this->_phoneNumber);

	while (hasOnlySpaces(this->_darkestSecret) == true)
		std::cout << "darkest secret : ", std::getline(std::cin, this->_darkestSecret);
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

void	Contact::printUser ( void ) const {
	
	std::string firstName = this->_firstName;
	std::string lastName = this->_lastName;
	std::string nickName = this->_nickName;

	if (firstName.length() >= 10)
		firstName.resize(10), firstName[9] = '.';
	std::cout << std::setw(10) <<  firstName << " | ";

	if (lastName.length() >= 10)
		lastName.resize(10), lastName[9] = '.';
	std::cout << std::setw(10) <<  lastName << " | ";

	if (nickName.length() >= 10)
		nickName.resize(10), nickName[9] = '.';
	std::cout << std::setw(10) << nickName << std::endl;
	return ;
}



