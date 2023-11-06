/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:29:14 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/06 13:08:57 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

Character::Character()  {

	this->name = "random";
	std::cout << "Character's constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string name) {

	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Character's constructor" << std::endl;
}

Character::Character(const Character& rhs) {

	this->name = rhs.name;
	for (int i = 0; i < 4; i++){
		this->inventory[i] = rhs.inventory[i];
	}
}

Character& Character::operator=(const Character& rhs) {

	this->name = rhs.name;
	for (int i = 0; i < 4; i++){
		this->inventory[i] = rhs.inventory[i];
	}
	return *this;
}

Character::~Character() {

	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
	std::cout << "Character's destructor" << std::endl;
}

std::string const& Character::getName() const {

	return this->name;
}

void Character::equip(AMateria* m) {

	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] == NULL) {
			this->inventory[i] = m;
			return;
		}
	}
	std::cout << "inventory is full !" << std::endl;
	return;
}

void Character::unequip(int idx) {

	this->inventory[idx] = NULL;
	std::cout << this->getName() << " drop his material" << std::endl;
	return;
}

void Character::use(int idx, ICharacter& target) {

	if (this->inventory[idx])
		this->inventory[idx]->use(target);
	else
		std::cout  << "nothing usable here" << std::endl;
	return;
}

AMateria* Character::saveEquip(int idx) {

	if (this->inventory[idx])
		return this->inventory[idx];
	return NULL;
}

