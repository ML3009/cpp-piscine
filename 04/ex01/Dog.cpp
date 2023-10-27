/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:49:41 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/26 17:22:53 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()  {

	this->type = "Dog";
	std::cout << "Dog's constructor" << std::endl;
}

Dog::Dog(const Dog& rhs) {

	*this = rhs;
}

Dog& Dog::operator=(const Dog& rhs) {

	this->type = rhs.type;
	return *this;
}

Dog::~Dog(void) {

	std::cout << "Dog's destructor" << std::endl;
}

void Dog::makeSound(void) const {

	std::cout << "[ Dog ]: woof woof !" << std::endl;
}
