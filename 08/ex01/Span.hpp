#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class Span{
    public:
        Span(unsigned int N);
        Span(const Span& rhs);
        Span& operator=(const Span& rhs);
        ~Span();

        void    addNumber(unsigned int value);
        unsigned int    shortestSpan();
        unsigned int    longestSpan();

        class   fullSpan : public std::exception {
            public:
                virtual const char* what() const throw ();
        };
        
        class noDistance : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        std::vector<unsigned int> getRange() const;
        void    AddMultiNumber();

    private:
        unsigned int _N;
        std::vector<unsigned int>   _tab;

};

void    print(std::vector<unsigned int> tab);