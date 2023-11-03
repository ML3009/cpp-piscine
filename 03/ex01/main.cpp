#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {

    std::cout << "\n [creation] \n" << std::endl;

    ClapTrap Clap("ClapTrap");
    ScavTrap Scav("ScavTrap");

    std::cout << "\n [attack] \n" << std::endl;

    Scav.attack("Henriette");
    Clap.attack("Gustave");

    std::cout << "\n [test] \n" << std::endl;

    Scav.guardGate();
    Scav.takeDamage(12);
    Scav.beRepaired(4);
    Scav.takeDamage(100);
    Scav.guardGate();

    std::cout << "\n [destruction] \n" << std::endl;

    return 0;
}
