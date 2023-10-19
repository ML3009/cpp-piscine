#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(const float one, const float two) : _x(one),  _y(two) { }

Point::Point(const Point& rhs) : _x(rhs.getX()), _y(rhs.getY()) { *this = rhs; }

Point& Point::operator=(const Point& rhs) {

	if (this != &rhs)
	{
		(Fixed) this->_x = rhs.getX();
		(Fixed) this->_y = rhs.getY();
	}

	return *this;
}

Point::~Point(void) { }

const Fixed Point::getX(void) const {

	return this->_x;
}

const Fixed Point::getY(void) const {

	return this->_y;
}
