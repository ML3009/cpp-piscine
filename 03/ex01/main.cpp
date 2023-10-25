#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {

    ClapTrap Clap("ClapTrap");
    ScavTrap Scav("ScavTrap");

    Scav.attack("ClapTrap");
    Clap.attack("ScavTrap");
    Scav.guardGate();
    Scav.takeDamage(101);
    Scav.guardGate();
    Scav.beRepaired(4);
    Clap.beRepaired(2);
    Scav.takeDamage(1);


    return 0;
}