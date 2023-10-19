/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:59:55 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/19 17:01:17 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _hitPoints(10), _energyPoints(10), _attackDamage(0){}

ClapTrap::ClapTrap(const ClapTrap &rhs) {*this = rhs;}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) { (void)rhs; return *this;}

ClapTrap::~ClapTrap(void) {}

