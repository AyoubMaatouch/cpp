#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#define NOT_STRING ""

class Zombie {
	std::string	z_name;
	public:
			Zombie(void);
			void	setZombieName(std::string name);
			void	announce( void );
			~Zombie(void);
};

Zombie*	zombieHorde(int N, std::string name );
#endif