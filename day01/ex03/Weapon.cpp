#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType (void)
{
    return this->type;
}

void Weapon::setType (const std::string& set_type)
{
    this->type = set_type;
}
Weapon::~Weapon(void)
{

}
