/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:49:41 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/30 13:29:46 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()  {

	this->type = "Dog";
	this->ideas = new Brain();

	std::cout << "Dog's constructor" << std::endl;
}

Dog::Dog(const Dog& rhs) {

	*this = rhs;
}

Dog& Dog::operator=(const Dog& rhs) {

	if (this != &rhs)
	{
		this->type = rhs.type;
		this->ideas = new Brain(*rhs.ideas);
	}
	return *this;
}

Dog::~Dog(void) {

	delete ideas;
	std::cout << "Dog's destructor" << std::endl;
}

void Dog::makeSound(void) const {

	std::cout << "[ Dog ]: woof woof !" << std::endl;
}

void Dog::setIdea(int posidea, std::string idea){
	ideas->setIdea(posidea, idea);
}

std::string Dog::getIdea(int posidea) const{
	return ideas->getIdea(posidea);
}
