#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie myZombie;

    myZombie.setZombieName(name);
    myZombie.announce();
}
