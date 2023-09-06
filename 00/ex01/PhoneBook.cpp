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
	this->_index = 0;
	return ;
}

PhoneBook::~PhoneBook( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

void	PhoneBook::addUser (void) {

	if (this->_index == 8)
		this->_index = 0;
	this->_contact[this->_index].setaddUser();
	this->_index++;
	return ;
	
}

void PhoneBook::searchUser (void) {

	int	search = 0;
	std::string index;
	displayContact();
	std::cout << "Please enter an index : " << std::endl;
	std::cout << "> ";
	std::getline(std::cin, index);
	search = std::atoi(index.c_str());
	if (search >= 0 && search < this->_index)
		this->_contact[search].getaddUser();
	else
		std::cout << "Please enter a valid index" << std::endl;

}

void PhoneBook::displayContact (void) const {

	std::cout << "id | first name | last name | nickname" << std::endl;
	for (int i = 0; i < this->_index; i++)
	{
		std::cout << i << " | ";
		this->_contact[i].printUser();
	}
	return ;

}

