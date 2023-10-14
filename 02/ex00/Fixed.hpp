#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>


class Fixed {

    public:

        Fixed(void); // constructeur par defaut
        Fixed(const Fixed& obj); // constructeur de recopie
        Fixed &operator=(const Fixed& obj); // surcharge de l'operation d'affectation
        ~Fixed(); //Destructeur

        int getRawBits(void) const;
        void setRawBits(int const raw);
    
    private:

        int _aFix;
        static int const _b;

};

#endif