#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* myZombie = new Zombie[N];
    for (int i = 0; i < N;  i++)
        myZombie[i].setZombieName(name);
    return myZombie;
}