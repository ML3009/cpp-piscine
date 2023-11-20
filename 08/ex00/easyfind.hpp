#pragma once
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

class noOccurrence : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "No ocurrences found!";
        }
};

template<typename T>
bool    easyfind(T& contain, int num) {  
    if (std::find(contain.begin(), contain.end(), num) == contain.end())
        throw noOccurrence();
    return true;
};


