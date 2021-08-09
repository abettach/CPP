#include "Zombie.hpp"

int     main(void)
{
    Zombie *zombie = newZombie("Zombie-in-the-heap");
    randomChump("Zombie-in-the-stack");

    delete zombie;
    return 0;
}