#include "Zombie.hpp"

int main(void)
{
	std::string zombies[4] = {"Aymaatou","Mougnou", "Emallah",  "Bamghough"};
    
	for (int i = 0; i < 4; i++)
    {
        Zombie* heap = newZombie(zombies[i] + " H");
	    heap->announce();
	    randomChump(zombies[i] + " S");

		delete heap;
    }
	return EXIT_SUCCESS;
}