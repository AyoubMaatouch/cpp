#include "Zombie.hpp"
int msg_err(void)
{
    (std::cout<<"Memory allocation failed\n");
    return 1;
}

Zombie* newZombie( std::string name )
{
    Zombie* myZombie = new Zombie();
    if (!myZombie)
        exit(msg_err());
    myZombie->setZombieName(name);
    // myZombie->announce();
    return myZombie;
}