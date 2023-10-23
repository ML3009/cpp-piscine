/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:31:53 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/23 10:10:23 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact (void) { }

Contact::~Contact(void){ }

bool	hasOnlySpaces(std::string str) {

	for (std::string::const_iterator it = str.begin(); it != str.end(); it++)
		if (*it != ' ' && *it != '\t')
			return false;
	return true ;
}

void	Contact::setaddUser(int index) {

	this->_firstName.clear();
	this->_lastName.clear();
	this->_nickName.clear();
	this->_phoneNumber.clear();
	this->_darkestSecret.clear();

	std::cout << std::endl << "[Contact n°" << index + 1 << "]" << std::endl << std::endl;
	while (hasOnlySpaces(this->_firstName) == true)
	{
		if (std::cin.eof() == true)
		{
			std::cout << std::endl;
			return ;
		}
		std::cout << "first name : ", std::getline(std::cin, this->_firstName);
	}
	while (hasOnlySpaces(this->_lastName) == true)
	{
		if (std::cin.eof() == true)
		{
			std::cout << std::endl;
			return ;
		}
		std::cout << "last name : ", std::getline(std::cin, this->_lastName);
	}
	while (hasOnlySpaces(this->_nickName) == true)
	{
		if (std::cin.eof() == true)
		{
			std::cout << std::endl;
			return ;
		}
		std::cout << "nickname : ", std::getline(std::cin, this->_nickName);
	}
	while (hasOnlySpaces(this->_phoneNumber) == true)
	{
		if (std::cin.eof() == true)
		{
			std::cout << std::endl;
			return ;
		}
		std::cout << "phone number : ", std::getline(std::cin, this->_phoneNumber);
	}
	while (hasOnlySpaces(this->_darkestSecret) == true)
	{
		if (std::cin.eof() == true)
		{
			std::cout << std::endl;
			return ;
		}
		std::cout << "darkest secret : ", std::getline(std::cin, this->_darkestSecret);
	}
	std::cout << std::endl;
	return ;
}

void	Contact::printUser (void) const {

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

void	Contact::getaddUser (void) const{

	std::cout << std::endl << "first name : " << this->_firstName << std::endl;
	std::cout << "last name : " << this->_lastName << std::endl;
	std::cout << "nickname : " << this->_nickName << std::endl;
	std::cout << "phone number : " << this->_phoneNumber << std::endl;
	std::cout << "darkest secret : "<< this->_darkestSecret << std::endl << std::endl;
	return ;
}


