/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:02:27 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/06 13:25:59 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource() {

	std::cout << "MateriaSource's constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& rhs) {

	for (int i = 0; i < 4; i++){
		this->inventory[i] = rhs.inventory[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {

	for (int i = 0; i < 4; i++){
		this->inventory[i] = rhs.inventory[i];
	}
	return *this;
}

MateriaSource::~MateriaSource() {

	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
	std::cout << "MateriaSource's destructor" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m) {

		for (int i = 0; i < 4; i++) {
			if (this->inventory[i] == NULL) {
				this->inventory[i] = m;
				return;
			}
		}
	delete m;
	std::cout << "inventory is full !" << std::endl;
	return;
}

AMateria* MateriaSource::createMateria(std::string const& type) {

	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] != NULL && this->inventory[i]->getType() == type)
			return this->inventory[i]->clone();
	}
	std::cout << "unknow Materia" << std::endl;
	return NULL;
}

