/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:02:27 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/03 15:31:45 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource() {

	std::cout << "Default's constructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& rhs) {

	*this = rhs;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {

	(void)rhs;
	return *this;
}

MateriaSource::~MateriaSource() {

	std::cout << "MateriaSource's destructor" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m) {

		for (int i = 0; i < 4; i++) {
			if (this->stock[i] == NULL) {
				this->stock[i] = m;
			return;
		}
	}
	std::cout << "inventory is full !" << std::endl;
	return;
}

AMateria* MateriaSource::createMateria(std::string const& type) {

	for (int i = 0; i < 4; i++) {
		if (this->stock[i]->getType() == type)
			return this->stock[i]->clone();
	}
	std::cout << "unknow Materia" << std::endl;
	return NULL;
}

