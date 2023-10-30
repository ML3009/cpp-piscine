/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:28:07 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/26 17:28:52 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(void) : type("Animal") {

	std::cout << "WrongAnimal's constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs) {

	*this = rhs;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {

	this->type = rhs.type;
	return *this;
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << "WrongAnimal's destructor" << std::endl;
}

void WrongAnimal::makeSound(void) const {

	std::cout << "[ WrongAnimal ]: wrong random sound..." << std::endl;
}

std::string WrongAnimal::getType() const{

	return this->type;
}
