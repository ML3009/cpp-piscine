/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:26:49 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/26 17:27:49 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()  {

	this->type = "WrongCat";
	std::cout << "WrongCat's constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& rhs) {

	*this = rhs;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs) {

	this->type = rhs.type;
	return *this;
}

WrongCat::~WrongCat(void) {

	std::cout << "WrongCat's destructor" << std::endl;
}

void WrongCat::makeSound(void) const {

	std::cout << "[ WrongCat ]:  wrong meooow..." << std::endl;
}
