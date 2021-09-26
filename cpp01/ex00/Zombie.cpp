#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
    announce();
    return ;
}

Zombie::~Zombie()
{
    std::cout<<this->name<<" desroyed"<<std::endl;
    return ;
}

void    Zombie::announce(void)
{
    std::cout<<this->name<< " BraiiiiiiinnnzzzZ..."<<std::endl;
}