/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:02:48 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/06 13:06:24 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

Ice::Ice() : AMateria() {

	this->type = "ice";
	std::cout << "Ice's constructor" << std::endl;
}

Ice::Ice(std::string const& type) : AMateria(type) {

	this->type = type;
	std::cout << "Ice's constructor" << std::endl;
}

Ice::Ice(const Ice& rhs) : AMateria(rhs.getType()) {

	std::cout << "Ice's copy" << std::endl;
	*this = rhs;
}

Ice& Ice::operator=(const Ice& rhs) {

	this->type = rhs.type;
	return *this;
}

Ice::~Ice() {

	std::cout << "Ice's destructor" << std::endl;
}

Ice* Ice::clone() const {

	return new Ice(*this);
}
