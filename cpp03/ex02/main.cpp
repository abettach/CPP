# include "FragTrap.hpp"
# include "ScavTrap.hpp"

int main()
{

    // ClapTrap claptrap_t1;
    // ClapTrap claptrap_t2("claptrap");
    // ClapTrap claptrap_t3(claptrap_t2);

    // claptrap_t3.attack("target");
    // claptrap_t3.takeDamage(25);
    // claptrap_t3.beRepaired(15);

    //std::cout << "------------------------------------------" << std::endl;

    // ScavTrap scavtpar_t1;
    // ScavTrap scavtpar_t2("scavtrap");
    // ScavTrap scavtpar_t3(scavtpar_t2);

    // scavtpar_t3.attack("target");
    // scavtpar_t3.takeDamage(100);
    // scavtpar_t3.beRepaired(50);
    // scavtpar_t3.guardGate();

    // std::cout << "------------------------------------------" << std::endl;

    FragTrap t1;
    FragTrap t2("fragtrap");
    FragTrap t3(t2);

    t3.attack("target");
    t3.takeDamage(100);
    t3.beRepaired(50);
    t3.highFivesGuys();
    
}