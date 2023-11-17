#pragma once
#include <string>
#include <iostream>

template<typename T>
class Array {
    public:
        Array() : _array(NULL), _size(0){};
        Array(unsigned int n) : _array(new T[n]), _size(n){};
        Array(const Array& rhs){*this = rhs;};
        Array&  operator=(const Array& rhs){
            if (this != &rhs){
                this->_size = rhs._size;
                this->_array = new T[this->_size];
                for(int i = 0; i < rhs._size; i++)
                    this->_array[i] = rhs._array[i];
            }
            return *this;
        };
        T&  operator[](const int index) {
            if (!this->_array || index < 0 || index >= this->_size)
                throw outOfBonds();
            return this->_array[index];
        }
        ~Array() {delete [] this->_array;}
        T   size(void) const{ return this->_size;};
        class outOfBonds : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "Index is out of bounds.";
                };
        };

    private:
        T*  _array;
        int _size;
};



