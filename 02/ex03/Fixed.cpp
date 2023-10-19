/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:43:48 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/19 16:43:51 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {

    setRawBits(0);
}

Fixed::Fixed(const int a) {

	this->_aFix = a << this->_b;
}

Fixed::Fixed(const float b) {

	this->_aFix = roundf((1 << this->_b) * b);
}

Fixed::Fixed(const Fixed& rhs) {

    *this = rhs;
}

Fixed& Fixed::operator=(const Fixed& rhs) {

    setRawBits(rhs.getRawBits());
    return *this;
}

Fixed::~Fixed(void) {

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

bool Fixed::operator>(const Fixed& rhs) const {

	return this->_aFix > rhs._aFix;
}

bool Fixed::operator<(const Fixed& rhs) const {

	return this->_aFix < rhs._aFix;
}

bool Fixed::operator>=(const Fixed& rhs) const {

	return this->_aFix >= rhs._aFix;
}

bool Fixed::operator<=(const Fixed& rhs) const {

	return this->_aFix <= rhs._aFix;
}

bool Fixed::operator==(const Fixed& rhs) const {

	return this->_aFix == rhs._aFix;
}

bool Fixed::operator!=(const Fixed& rhs) const {

	return this->_aFix != rhs._aFix;
}

Fixed Fixed::operator+(const Fixed& rhs) const {

	return this->_aFix + rhs._aFix;
}

Fixed Fixed::operator-(const Fixed& rhs) const {

	return this->_aFix - rhs._aFix;
}

Fixed Fixed::operator*(const Fixed& rhs) const {

	return this->toFloat() * rhs.toFloat();
}

Fixed Fixed::operator/(const Fixed& rhs) const {

	return this->toFloat() / rhs.toFloat();
}

Fixed& Fixed::operator++(void) {

	this->_aFix++;

	return *this;
}

Fixed Fixed::operator++(int) {

	Fixed old (*this);
	this->_aFix++;

	return old;
}

Fixed& Fixed::operator--(void) {

	this->_aFix--;

	return *this;
}

Fixed Fixed::operator--(int){

	Fixed old(*this);
	this->_aFix++;

	return old;
}

Fixed& Fixed::min(Fixed& lhs, Fixed &rhs) {

	if (lhs < rhs)
		return lhs;
	return rhs;
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs) {

	if (lhs < rhs)
		return lhs;
	return rhs;
}

Fixed& Fixed::max(Fixed& lhs, Fixed &rhs) {

if (lhs > rhs)
		return lhs;
	return rhs;
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs) {

if (lhs > rhs)
		return lhs;
	return rhs;
}

std::ostream& operator<<(std::ostream& o, Fixed const & rhs) {

	o << rhs.toFloat();
	return o;
}
