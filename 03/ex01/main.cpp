#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {

    ClapTrap H("ClapTrap");
    ScavTrap G("ScavTrap");
    G.attack("Albert");
    H.attack("Gilberte");
    G.takeDamage(2);
    G.beRepaired(2);
    H.takeDamage(1);


    return 0;
}