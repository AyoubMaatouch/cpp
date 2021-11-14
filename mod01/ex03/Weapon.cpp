#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType (void)
{
    return this->type;
}

void Weapon::setType (std::string set_type)
{
    this->type = set_type;
}

