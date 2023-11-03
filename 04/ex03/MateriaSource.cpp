/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:02:27 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/03 17:04:53 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource() {

	std::cout << "MateriaSource's constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->stock[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& rhs) {

	for (int i = 0; i < 4; i++){
		if (this->stock[i])
			delete this->stock[i];
		if (rhs.stock[i])
			this->stock[i] = rhs.stock[i];
		else
			this->stock[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {

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

MateriaSource::~MateriaSource() {

	for (int i = 0; i < 4; i++)
		delete this->stock[i];
	std::cout << "MateriaSource's destructor" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m) {

		for (int i = 0; i < 4; i++) {
			if (this->stock[i] == NULL) {
				this->stock[i] = m;
				return;
			}
		}
	delete m;
	std::cout << "inventory is full !" << std::endl;
	return;
}

AMateria* MateriaSource::createMateria(std::string const& type) {

	for (int i = 0; i < 4; i++) {
		if (this->stock[i] != NULL && this->stock[i]->getType() == type)
			return this->stock[i]->clone();
	}
	std::cout << "unknow Materia" << std::endl;
	return NULL;
}

