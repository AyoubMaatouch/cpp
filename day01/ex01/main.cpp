#include "Zombie.hpp"

int main(void)
{
    Zombie* heap = zombieHorde(4, "Aymaatou");
	for (int i = 0; i < 4; i++)
    {
	    heap[i].announce();
    }
	delete[] heap;
	return EXIT_SUCCESS;
}