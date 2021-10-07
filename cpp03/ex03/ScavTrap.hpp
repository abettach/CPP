#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public :
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap(const ScavTrap &other);
        ScavTrap &operator=(const ScavTrap &other);
        void guardGate();
        void attack(const std::string &target);
};