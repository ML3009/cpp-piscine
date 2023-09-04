/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:55:19 by mvautrot          #+#    #+#             */
/*   Updated: 2023/09/04 14:59:33 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ){

	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

