#include "FragTrap.hpp"

FragTrap::FragTrap (std::string const &name) : ClapTrap(name)
{
	this->name = name;
	this->hitpoints = 100;
	this->attack_damage = 0;
	this->energy_points = 100;
	std::cout<<"FragTrap Constractor Called"<<std::endl;
}

FragTrap::~FragTrap ()
{
	std::cout<<"FragTrap ClapTrap Destractor Called"<<std::endl;
}

FragTrap::FragTrap(FragTrap const &src): ScavTrap(src)
{
	std::cout<<"FragTrap Copy Constractor Called"<<std::endl;
	*this = src;
}


FragTrap FragTrap::operator=(FragTrap const &clap)
{
	this->name = clap.name;
	this->hitpoints = clap.hitpoints;
	this->attack_damage = clap.attack_damage;
	this->energy_points = clap.energy_points;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
        std::cout<<"FragTrap positive high fives request"<<std::endl;
}