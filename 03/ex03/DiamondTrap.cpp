#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap() {}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {

    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << this->_name << "was created !" << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs) { *this = rhs; }

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {

    this->_name = rhs._name;
    this->ClapTrap::_name = _name + "_clap_name";
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;

    return *this;
}

DiamondTrap::~DiamondTrap(void) {

    std::cout << this->_name << "was destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {

    this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {

    std::cout << "My name is " << this->_name << "my ClapTrap's name is " << ClapTrap::_name << std::endl;
}


