#include "Brain.hpp"

Brain::Brain(void) {

    std::cout << "Brain's constructor" << std::endl;
}

Brain::Brain(const Brain& rhs) {

    *this = rhs;
}

Brain& Brain::operator=(const Brain& rhs) {

    this->_ideas[100] = rhs._ideas[100];
    return *this;
}

Brain::~Brain(void) {

    std::cout << "Brain's destructor" << std::endl;
}

void    Brain::setIdea(int posidea, std::string idea) {

    this->_ideas[posidea] = idea;
}

std::string Brain::getIdea(int posidea) const {

    return this->_ideas[posidea];
}