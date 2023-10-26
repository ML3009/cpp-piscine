#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {

    //ClapTrap Clap("ClapTrap");
    //ScavTrap Scav("ScavTrap");
    //FragTrap Frag("FragTrap");
    DiamondTrap Diam("DiamondTrap");

    //Scav.attack("ClapTrap");
    //Clap.attack("ScavTrap");
    //Frag.attack("Random");
    Diam.attack("COUCOU");

    //Scav.guardGate();
    Diam.whoAmI();
    //Diam.takeDamage(50);
    //Diam.beRepaired(2);
    //Frag.highFivesGuy();
    //Frag.takeDamage(2);
    //Scav.takeDamage(101);
    //Scav.guardGate();
    //Frag.takeDamage(200);
    //Frag.highFivesGuy();
    //Scav.beRepaired(4);
    //Frag.beRepaired(4);
    //Clap.beRepaired(2);
    //Scav.takeDamage(1);


    return 0;
}
