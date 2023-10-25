#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap& rhs);
        FragTrap& operator=(const FragTrap& rhs);
        ~FragTrap(void);

        void highFivesGuy(void);

};


#endif