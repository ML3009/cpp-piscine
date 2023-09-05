/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:55:19 by mvautrot          #+#    #+#             */
/*   Updated: 2023/09/05 16:42:22 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ){

	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

void	PhoneBook::addUser (void) {

	this->id++;


}


bool	hasOnlySpaces(std::string str) {

	for (std::string::const_iterator it = str.begin(); it != str.end(); it++)
		if (*it != ' ' && *it != '\t')
			return false;
	return true ;
}

void	PhoneBook::setaddUser ( void ) {

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

