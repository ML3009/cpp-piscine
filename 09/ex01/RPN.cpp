#include "RPN.cpp"

RPN::RPN() {}

RPN::RPN(const RPN& rhs) {*this = rhs;}

RPN&	operator=(const RPN& rhs) {
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

RPN::~RPN() {}

