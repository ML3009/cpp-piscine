#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {

    std::cout << "\n [creation] \n" << std::endl;

    ClapTrap Clap("ClapTrap");
    ScavTrap Scav("ScavTrap");
    FragTrap Frag("FragTrap");

    std::cout << "\n [attack] \n" << std::endl;

    Scav.attack("Gustave");
    Clap.attack("Henriette");
    Frag.attack("Random");

    std::cout << "\n [tests] \n" << std::endl;

    Frag.highFivesGuy();
    Frag.takeDamage(2);
    Frag.takeDamage(200);
    Frag.highFivesGuy();
    Frag.beRepaired(4);

    std::cout << "\n [destruction] \n" << std::endl;

    return 0;
}
