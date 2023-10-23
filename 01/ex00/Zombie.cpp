/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:40:52 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/23 15:37:48 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {

    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie(void) {

    std::cout << this->_name << " destroyed" << std::endl;
}

void Zombie::setName(std::string name) {

    this->_name = name;
}

void    Zombie::announce(void) {

    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
