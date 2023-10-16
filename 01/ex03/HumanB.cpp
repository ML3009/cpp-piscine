/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:41:58 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/12 13:42:01 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {

    std::cout << "Constructor called" << std::endl;
    return ;
}

HumanB::~HumanB(void) {

    std::cout << "Destructor called" << std::endl;
    return ;
}

void HumanB::attack(void) const {

    if (this->_weapon == NULL)
        std::cout << this->_name << " attacks with nothing" << std::endl;
    else if (this->_weapon != NULL)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    return ;
}

void HumanB::setWeapon(Weapon& weapon) {

    this->_weapon = &weapon;
    return ;
}
