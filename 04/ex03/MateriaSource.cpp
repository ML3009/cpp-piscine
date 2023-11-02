/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:02:27 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/02 16:30:39 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	std::cout << "Default's constructor" << std::endl;
}


MateriaSource::MateriaSource(const MateriaSource& rhs) {

	*this = rhs;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {

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

AMateria* createMateria(std::string const& type) {

	for (int i = 0; i < 4; i++) {
		if (this->stock[i].getType() == type)
			return this->stock[i]->clone();
	}
	std::cout << "unknow Materia" << std::endl;


}

