#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap_t1;
    ClapTrap claptrap_t2("claptrap");
    ClapTrap claptrap_t3(claptrap_t2);

    claptrap_t3.attack("target");
    claptrap_t3.takeDamage(25);
    claptrap_t3.beRepaired(15);
}