/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:42:18 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/12 13:42:20 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {

    std::cout << "Constructor called" << std::endl;
    return ;
}

Weapon::~Weapon(void) {

    std::cout << "Destructor called" << std::endl;
    return ;
}


std::string const& Weapon::getType(void) const {

    return this->_type;
}

void Weapon::setType(std::string type) {

    this->_type = type;
    return ;
}
