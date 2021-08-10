#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    setType(type);
    this->type = getType();
}

Weapon::~Weapon()
{
    return;
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string Weapon::getType(void)
{
    return this->type;
}