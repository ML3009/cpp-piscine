/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:29:14 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/03 15:40:58 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

Character::Character() : ICharacter () {

	this->name = "random";
	std::cout << "Default's constructor" << std::endl;
}

Character::Character(std::string name) : ICharacter() {

	this->name = name;
	std::cout << "Character's constructor" << std::endl;
}


Character::Character(const Character& rhs) {

	this->name = rhs.name;
	for (int i = 0; i < 4; i++)
		this->stock[i] = rhs.stock[i];
}

Character& Character::operator=(const Character& rhs) {

	this->name = rhs.name;
	for (int i = 0; i < 4; i++)
		this->stock[i] = rhs.stock[i];
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

	this->stock[idx]->use(target);
	return;
}
