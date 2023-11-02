/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:25:52 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/02 16:36:10 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("random") {

	std::cout << "Default's constructor" << std::endl;
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

/*AMateria* AMateria::clone() const {

	return new AMateria(*this);
}*/

/*void AMateria::use(ICharacter& target) {


Pour ce qui est de la fonction membre use(ICharacter&), elle affichera :
• Ice : "* shoots an ice bolt at <name> *"
• Cure : "* heals <name>’s wounds *"
<name> est le nom du Character (personnage) passé en paramètre. N’affichez pas les
chevrons (< et >).

}*/
