/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:59:55 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/25 13:58:17 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("unknow"), _hitPoints(10), _energyPoints(10), _attackDamage(0){std::cout << "Creation of ClapTrap" << std::endl;}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){std::cout << "Creation of ClapTrap" << std::endl;}

ClapTrap::ClapTrap(const ClapTrap &rhs) {*this = rhs;}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {

    this->_name = rhs._name;
    this->_hitPoints = rhs._energyPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

ClapTrap::~ClapTrap(void) { std::cout << "Destruction of ClapTrap" << std::endl;}

void ClapTrap::attack(const std::string& target) {

    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_energyPoints--;
        std::cout << this->_name << " attacks " << target << ", causing him " << this->_attackDamage << " points of damage!" << std::endl;
    }
    else if (this->_energyPoints <= 0)
        std::cout << this->_name << " has no more energy points!" << std::endl;
    else
         std::cout << this->_name << " can't attack, because he is already dead..." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {

    unsigned int temp = this->_hitPoints;
    temp-=amount;
    if (this->_hitPoints > 0)
    {
        if (temp > this->_hitPoints)
            this->_hitPoints = 0;
        else
            this->_hitPoints-=amount;
        std::cout << _name << " has been attacked! He lost " << amount << " hit points. "
        << "Remaining hit points: " << this->_hitPoints << "." << std::endl;
    }
    else
         std::cout << this->_name << " cannot be attacked, because he is already dead..." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_energyPoints--;
        this->_hitPoints+=amount;
        std::cout << _name << " uses an energy point to repaired itself. Increased hit points by: " << amount << ". Remaining hit points: " << this->_hitPoints << ". Remaining energy points: " << this->_energyPoints << "." << std::endl;
    }
    else if (this->_energyPoints <= 0)
        std::cout << this->_name << " has no more energy points to be repaired!" << std::endl;
    else
        std::cout << this->_name << " cannot be repaired, because he is already dead..." << std::endl;
}
