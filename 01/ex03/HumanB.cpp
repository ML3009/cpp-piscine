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