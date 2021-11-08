#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie* myZombie = new Zombie();
    myZombie->setZombieName(name);
    // myZombie->announce();
    return myZombie;
}