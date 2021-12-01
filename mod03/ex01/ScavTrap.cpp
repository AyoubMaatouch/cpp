#include "ScavTrap.hpp"

ScavTrap::ScavTrap (std::string const &name) : ClapTrap(name)
{
	this->name = name;
	this->hitpoints = 100;
	this->attack_damage = 0;
	this->energy_points = 100;
	std::cout<<"ScavTrap Constractor Called"<<std::endl;
}

ScavTrap::~ScavTrap ()
{
	std::cout<<"ScavTrap ClapTrap Destractor Called"<<std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src)
{
	std::cout<<"ScavTrap Copy Constractor Called"<<std::endl;
	*this = src;
}


ScavTrap ScavTrap::operator=(ScavTrap const &clap)
{
	this->name = clap.name;
	this->hitpoints = clap.hitpoints;
	this->attack_damage = clap.attack_damage;
	this->energy_points = clap.energy_points;
	return *this;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap <" << this->name<< "> have enterred in Gate keeper mode." <<std::endl;
}