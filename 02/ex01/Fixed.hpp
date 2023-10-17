#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed {

    public:

        Fixed(void);
        Fixed(const int a);
        Fixed(const float b);
        Fixed(const Fixed& rhs);
        Fixed &operator=(const Fixed& rhs);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(const int raw);
        float toFloat(void) const;
        int toInt(void) const;

    private:

        int _aFix;
        static const int _b = 8;

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);









#endif
