#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap(const ScavTrap &other);
        ScavTrap &operator=(const ScavTrap &other);
        void attack(const std::string &target);
        void guardGate();
};