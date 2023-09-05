/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:55:19 by mvautrot          #+#    #+#             */
/*   Updated: 2023/09/05 11:16:23 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( char name, int number ){

	std::cout << "Constructor called" << std::endl;

	this->n = name;
	std::cout << "this->n phonebook " << this->n << std::endl;

	this->nb = number;
	std::cout << "this->nb phonebook " << this->nb << std::endl;

	this->_image = 'I';
	std::cout << "this->_image " << this->_image << std::endl;

	return ;
}

PhoneBook::~PhoneBook( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

void	PhoneBook::user( void ) const {

	std::cout << "Member function user called" << std::endl;
}

void	PhoneBook::_test (void) const {

	std::cout << "Member function _private called" << std::endl;
	return ;
}

