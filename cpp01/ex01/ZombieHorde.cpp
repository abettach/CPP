#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombie = new Zombie[N];

    for (int i = 0; i < N ; i++)
    {
        zombie[i].set_zombie_name(name + " " +  std::to_string(i));
        zombie[i].announce();
    }
    return zombie;
}