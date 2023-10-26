/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:49:36 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/26 17:22:34 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()  {

	this->type = "Cat";
	std::cout << "Cat's constructor" << std::endl;
}

Cat::Cat(const Cat& rhs) {

	*this = rhs;
}

Cat& Cat::operator=(const Cat& rhs) {

	this->type = rhs.type;
	return *this;
}

Cat::~Cat(void) {

	std::cout << "Cat's destructor" << std::endl;
}

void Cat::makeSound(void) const {

	std::cout << "Cat sound" << std::endl;
}
