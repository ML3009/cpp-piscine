/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:25:52 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/03 17:30:05 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("random") {

	std::cout << "AMateria's constructor" << std::endl;
}

AMateria::AMateria(std::string const& type) {

	this->type = type;
	std::cout << "AMateria's constructor" << std::endl;
}

AMateria::AMateria(const AMateria& rhs) {

	*this = rhs;
}

AMateria& AMateria::operator=(const AMateria& rhs) {

	this->type = rhs.type;
	return *this;
}

AMateria::~AMateria() {

	std::cout << "AMateria's destructor" << std::endl;
}

std::string const& AMateria::getType() const {

	return this->type;
}

void AMateria::use(ICharacter& target) {

	if (this->getType()== "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->getType() == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	else
		std::cout << "inventory is empty !" << std::endl;
	return;
}
