/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:41:45 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/16 12:19:00 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {

    std::cout << "Constructor called" << std::endl;
}

HumanA::~HumanA(void) {

    std::cout << "Destructor called" << std::endl;
}

void HumanA::attack(void) const {

    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
    return ;
}
