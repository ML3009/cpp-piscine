#include "Zombie.hpp"

int main(void) {
    
    Zombie* zombie = newZombie("newZombie");
    zombie->announce();
    randomChump("randomChump");
    delete zombie;
    return 0;
}