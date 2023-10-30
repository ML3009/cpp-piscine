/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:49:34 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/30 13:25:08 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal(void) : type("Animal") {

	std::cout << "Animal's constructor" << std::endl;
}

Animal::Animal(const Animal& rhs) {

	*this = rhs;
}

Animal& Animal::operator=(const Animal& rhs) {

	this->type = rhs.type;
	return *this;
}

Animal::~Animal(void) {

	std::cout << "Animal's destructor" << std::endl;
}

void Animal::makeSound(void) const {

	std::cout << "[ Animal ]: random sound" << std::endl;
}

std::string Animal::getType() const{

	return this->type;
}
