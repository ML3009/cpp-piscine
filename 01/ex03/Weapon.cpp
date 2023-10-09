#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
    
    std::cout << "Constructor called" << std::endl;
    return ;
}

Weapon::~Weapon(void) {
    
    std::cout << "Destructor called" << std::endl;
    return ;
}


std::string const& Weapon::getType(void) const {
    
    return this->_type;
}

void Weapon::setType(std::string type) {
    
    this->_type = type;
    return ;
}