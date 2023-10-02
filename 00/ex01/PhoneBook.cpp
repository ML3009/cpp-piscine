/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:55:19 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/02 11:18:22 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ){

	//std::cout << "Constructor called" << std::endl;
	this->_index = 0;
	return ;
}

PhoneBook::~PhoneBook( void ) {

	std::cout << "\n"<< std::endl;
	return ;
}

void	PhoneBook::addUser (void) {

	this->_contact[this->_index % 8].setaddUser(this->_index % 8);
	this->_index++;
	return ;

}

void PhoneBook::searchUser (void) const{

	int	search = 0;
	int	limit = this->_index;
	std::string index;

	displayContact();
	std::cout << "Please enter an index : ";
	std::getline(std::cin, index);
	search = std::atoi(index.c_str());
	if (limit > 8)
		limit = 8;
	if (search >= 0 && search < limit && index >= "0" && index <= "7")
		this->_contact[search].getaddUser();
	else
	{
		std::cout << "Please enter a valid index" << std::endl;
		searchUser();
	}
}

void PhoneBook::displayContact (void) const {

	int	limit = this->_index;
	if (limit > 8)
		limit = 8;
	std::cout << std::setw(10) << "index" << " | ";
	std::cout << std::setw(10) << "first name" << " | ";
	std::cout << std::setw(10) << "last name" << " | ";
	std::cout << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < limit ; i++)
	{
		std::cout << std::setw(10) << i << " | ";
		this->_contact[i].printUser();
	}
	return ;
}


