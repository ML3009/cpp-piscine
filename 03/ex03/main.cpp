#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {

    std::cout << "\n [creation] \n" << std::endl;

    ClapTrap Clap("ClapTrap");
    ScavTrap Scav("ScavTrap");
    FragTrap Frag("FragTrap");
    DiamondTrap Diam("DiamondTrap");

    std::cout << "\n [attack]\n" << std::endl;

    Scav.attack("ClapTrap");
    Clap.attack("ScavTrap");
    Frag.attack("Random");
    Diam.attack("Henriette");

    std::cout << "\n [DiamondTrap]\n" << std::endl;

    Diam.whoAmI();
    Diam.takeDamage(50);
    Diam.beRepaired(2);

    std::cout << "\n [destruction] \n" << std::endl;

    return 0;
}
