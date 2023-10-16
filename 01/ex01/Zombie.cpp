/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:41:16 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/12 13:41:18 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie( void ) {

    std::cout << "Constructed" << std::endl;
}

Zombie::~Zombie( void ) {

    std::cout << "Destructed " << this->_name << std::endl;
}

void Zombie::setName( std::string name ) {

    this->_name = name;
}

void    Zombie::announce( void ) {

    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
