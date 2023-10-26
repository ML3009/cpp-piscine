#include "Fixed.hpp"

Fixed::Fixed(void) {

    std::cout << "Default constructor called" << std::endl;
    setRawBits(0);
}

Fixed::Fixed(const int a) {

	std::cout << "Int constructor called" << std::endl;
	this->_aFix = a << this->_b;
}

Fixed::Fixed(const float b) {

	std::cout << "Float constructor called" << std::endl;
	this->_aFix = roundf((1 << this->_b) * b);
}

Fixed::Fixed(const Fixed& rhs) {

    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}


Fixed& Fixed::operator=(const Fixed& rhs) {

    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(rhs.getRawBits());
    return *this;
}

std::ostream& operator<<(std::ostream& o, Fixed const & rhs) {

	o << rhs.toFloat();
	return o;
}

Fixed::~Fixed(void) {

    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {

    return this->_aFix;
}

void Fixed::setRawBits(int const raw) {

    this->_aFix = raw;
}

float Fixed::toFloat(void) const {

	return (float)this->_aFix / (float)(1 << this->_b);
}

int Fixed::toInt(void) const {

	return this->_aFix >> this->_b;
}
