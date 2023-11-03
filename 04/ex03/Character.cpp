/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:29:14 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/03 17:00:20 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

Character::Character()  {

	this->name = "random";
	std::cout << "Character's constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->stock[i] = NULL;
}

Character::Character(std::string name) {

	this->name = name;
	for (int i = 0; i < 4; i++)
		this->stock[i] = NULL;
	std::cout << "Character's constructor" << std::endl;
}

Character::Character(const Character& rhs) {

	this->name = rhs.name;
	for (int i = 0; i < 4; i++){
		if (this->stock[i])
			delete this->stock[i];
		if (rhs.stock[i])
			this->stock[i] = rhs.stock[i];
		else
			this->stock[i] = NULL;
	}
}

Character& Character::operator=(const Character& rhs) {

	this->name = rhs.name;
	for (int i = 0; i < 4; i++){
		if (this->stock[i])
			delete this->stock[i];
		if (rhs.stock[i])
			this->stock[i] = rhs.stock[i];
		else
			this->stock[i] = NULL;
	}
	return *this;
}

Character::~Character() {

	for (int i = 0; i < 4; i++)
		delete this->stock[i];
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

	if (this->stock[idx])
		this->stock[idx]->use(target);
	else
		std::cout  << "nothing usable here" << std::endl;
	return;
}
