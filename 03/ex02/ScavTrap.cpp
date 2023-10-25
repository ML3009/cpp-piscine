#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) { 
   
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap is born " << std::endl;    
}

ScavTrap::ScavTrap(const ScavTrap& rhs) { *this = rhs; }

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {

    this->_Name = rhs._Name;
    this-> _hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

ScavTrap::~ScavTrap(void) { std::cout << "ScavTrap is dead" << std::endl; }

void ScavTrap::attack(const std::string& target) {

    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_energyPoints--;
        std::cout << this->_Name << " bit " << target << ", causing him " << this->_attackDamage << " points of damage!" << std::endl;   
    }
    else if (this->_energyPoints <= 0)
        std::cout << this->_Name << " is running out of energy!" << std::endl;
    else
         std::cout << this->_Name << " can't bit, because he is dead..." << std::endl;
}

void ScavTrap::guardGate(void) {

    if (this->_energyPoints > 0 && this->_hitPoints > 0)
        std::cout << this->_Name << " is in gate guard mode ! " << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << this->_Name << " can't go into gate guard mode, because he is running out of energy!" << std::endl;
    else
         std::cout << this->_Name << " can't go into gate guard mode, because he is dead..." << std::endl;

}

