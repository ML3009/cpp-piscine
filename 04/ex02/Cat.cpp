/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:49:36 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/30 13:33:18 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()  {

	this->type = "Cat";
	this->ideas = new Brain();
	std::cout << "Cat's constructor" << std::endl;
}

Cat::Cat(const Cat& rhs) {

	this->type = rhs.type;
	this->ideas = new Brain(*rhs.ideas);
	std::cout << "Cat Copy created" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs) {

	if (this != &rhs)
	{
		this->type = rhs.type;
		this->ideas = new Brain(*rhs.ideas);
	}
	return *this;
}

Cat::~Cat(void) {

	delete ideas;
	std::cout << "Cat's destructor" << std::endl;
}

void Cat::makeSound(void) const {

	std::cout << "[ Cat ]: meoooow !" << std::endl;
}

void Cat::setIdea(int posidea, std::string idea){
	ideas->setIdea(posidea, idea);
}

std::string Cat::getIdea(int posidea) const{
	return ideas->getIdea(posidea);
}
