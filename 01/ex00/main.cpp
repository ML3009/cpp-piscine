#include "Zombie.hpp"

int main( void ) {
    
    Zombie* zombie = newZombie("RandomZ");
    zombie->announce();
    randomChump("RandomChump");
    delete zombie;
    return 0;
}