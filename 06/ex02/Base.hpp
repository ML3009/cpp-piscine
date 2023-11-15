#pragma once

#include <iostream>
#include <string>


class Base {

	public:
		Base();
		Base(const Base& rhs);
		Base& operator=(const Base& rhs);
		~Base();

	private:

};

