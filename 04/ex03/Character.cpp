/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:29:14 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/02 16:38:20 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {

	this->name = "random";
	std::cout << "Default's constructor" << std::endl;
}

Character::Character(std::string name) {

	this->name = name;
	std::cout << "Character's constructor" << std::endl;
}


Character::Character(const Character& rhs) {

	this->name = rhs.name;
	for (int i = 0)
	this->stock = rhs.stock;
}

Character& Character::operator=(const Character& rhs) {

	this->name = rhs.name;
	this->stock = rhs.stock;
	return *this;
}

Character::~Character() {

	std::cout << "Character's destructor" << std::endl;
}

std::string const& Character::getName() const {

	return this->name;
}

void Character::equip(AMateria* m) {

	for (int i = 0; i < 4; i++) {
		if (this->stock[i] == NULL) {
			this->stock[i] = m;
			return;
		}
	}
	std::cout << "inventory is full !" << std::endl;
	return;
}

void Character::unequip(int idx) {

	this->stock[idx] = NULL;
	return;
}

void Character::use(int idx, ICharacter& target) {

	if (this->stock[idx].getType()== "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->stock[idx].getType() == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	else
		std::cout << "inventory is empty !" << std::endl;
	return;
}
