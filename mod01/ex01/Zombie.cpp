
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->z_name = NOT_STRING;
};

void	Zombie::setZombieName(std::string name)
{
	this->z_name = name;
}

void	Zombie::announce( void )
{
	std::cout<<"<"<<this->z_name<<"> "<<"BraiiiiiiinnnzzzZ..."<<std::endl;
};

Zombie::~Zombie(void)
{
	std::cout<<this->z_name<<" is Dead"<<std::endl;
};