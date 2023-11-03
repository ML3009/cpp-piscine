/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:02:48 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/03 15:28:04 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


Ice::Ice() : AMateria() {

	this->type = "ice";
	std::cout << "Default's constructor" << std::endl;
}

Ice::Ice(std::string const& type) : AMateria(type) {

	this->type = type;
	std::cout << "Ice's constructor" << std::endl;
}

Ice::Ice(const Ice& rhs) {

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

