#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon Wp)
{
    // std::cout<<this->name<<" attacks with his "<<Wp.getType()<<std::endl;
    this->name = name;
    this->gun = Wp.getType();
}

void    HumanA::attack(void)
{
    std::cout<<this->name<<" attacks with his "<<this->gun<<std::endl;
}

HumanA::~HumanA(void)
{
    
}