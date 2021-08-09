#include "Zombie.hpp"


Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout<<this->name<<" desroyed"<<std::endl;
    return ;
}

void     Zombie::set_zombie_name(std::string name)
{
    this->name = name;
}

void    Zombie::announce(void)
{
    std::cout<<this->name<< " BraiiiiiiinnnzzzZ..."<<std::endl;
}