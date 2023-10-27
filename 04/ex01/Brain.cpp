#include "Brain.hpp"

Brain::Brain(void) {

    std::cout << "Brain's constructor" << std::endl;
}

Brain::Brain(const Brain& rhs) {

    *this = rhs;
}

Brain& Brain::operator=(const Brain& rhs) {

    this->ideas[100] = rhs.ideas[100];
    return *this;
}

Brain::~Brain(void) {

    std::cout << "Brain's destructor" << std::endl;
}
