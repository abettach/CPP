#ifndef _FRAG_TRAP_HPP_
#define _FRAG_TRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public :
        FragTrap();
        ~FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap &other);
        FragTrap &operator=(const FragTrap &other);
        void highFivesGuys(void);
};

#endif