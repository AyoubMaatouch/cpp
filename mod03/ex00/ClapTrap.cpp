#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string name)
{
	std::cout<<"Default Constractor Called"<<std::endl;
	this->name = name;
	this->hitpoints = 10;
	this->attack_damage = 0;
	this->energy_points = 10;
}

ClapTrap::~ClapTrap ()
{
	std::cout<<"Destractor Called"<<std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout<<"Copy Constractor Called"<<std::endl;
	*this = src;
}

std::string ClapTrap::get_name(void)
{
	return this->name;
}
void     ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 10 || this->hitpoints == 0)
		return ;
	this->hitpoints -= amount;
	std::cout << "ClapTrap <"<<this->get_name()<<"> took <"<< amount << "> Hits"<<std::endl;
}

void     ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > 10 && this->energy_points == 0)
		return ;
	this->energy_points -= amount;
	this->hitpoints -= amount;

	std::cout << "ClapTrap <"<<this->get_name()<<"> Got <"<< amount << "> Repaired"<<std::endl;
}

void    ClapTrap::attack(std::string const & target)
{
	std::cout<<"ClapTrap <"<<ClapTrap::get_name()<<"> attack <"<<target<<">, causing <1> points of damage!"<<std::endl;
	this->attack_damage += 1;
}

ClapTrap ClapTrap::operator=(ClapTrap const &clap)
{
	// *this = clap;
	return clap;
}