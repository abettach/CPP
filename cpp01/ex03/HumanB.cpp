#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : weapon(NULL)
{
    this->name = name;
    return;
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack()
{
    if (this->weapon)
        std::cout<<this->name<<" attacks with his "<<this->weapon->getType()<<std::endl;
    else
        std::cout<<this->name<<" attacks with his fist"<<std::endl;
}