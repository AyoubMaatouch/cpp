#include "Zombie.hpp"

int msg_err(void)
{
    (std::cout<<"Memory allocation failed\n");
    return 1;
}

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* myZombie = new Zombie[N];
    
    if (!myZombie)
        exit(msg_err());
    for (int i = 0; i < N;  i++)
        myZombie[i].setZombieName(name);
    return myZombie;
}