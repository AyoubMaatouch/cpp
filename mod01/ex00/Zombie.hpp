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

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif