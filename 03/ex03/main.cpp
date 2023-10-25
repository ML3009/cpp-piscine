#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {

    ClapTrap Clap("ClapTrap");
    ScavTrap Scav("ScavTrap");
    FragTrap Frag("FragTrap");

    Scav.attack("ClapTrap");
    Clap.attack("ScavTrap");
    Frag.attack("Random");

    Scav.guardGate();
    Frag.highFivesGuy();
    Frag.takeDamage(2);
    Scav.takeDamage(101);
    Scav.guardGate();
    Frag.takeDamage(200);
    Frag.highFivesGuy();
    Scav.beRepaired(4);
    Frag.beRepaired(4);
    Clap.beRepaired(2);
    Scav.takeDamage(1);


    return 0;
}