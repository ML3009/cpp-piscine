#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

    this->_Name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap is up " << std::endl;  
}

FragTrap::FragTrap(const FragTrap& rhs) { *this = rhs; }

FragTrap& FragTrap::operator=(const FragTrap& rhs) {

    this->_Name = rhs._Name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;

    return *this;
}

FragTrap::~FragTrap(void) {
    
    std::cout << "FragTrap is down " << std::endl;  
}

void FragTrap::highFivesGuy(void) {

    if (this->_energyPoints > 0 && this->_hitPoints > 0)
        std::cout << this->_Name << " gives positive high fives ! " << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << this->_Name << " can't gives positive high fives, because he is running out of energy!" << std::endl;
    else
         std::cout << this->_Name << " can't gives positive high fives, because he is dead..." << std::endl;

}