#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor" << std::endl;
    this->Hitpoints = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "ClapTrap paramitrise constructor" << std::endl;
    this->Name = Name;
    this->Hitpoints = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap Assignation operator" << std::endl;
    if (this != &other)
    {
        this->Name = other.Name;
        this->Hitpoints = other.Hitpoints;
        this->Energy_points = other.Energy_points;
        this->Attack_damage = other.Attack_damage;
    }
    return *this;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << Name << " attack " << target << " ,causing " << Attack_damage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << Name << " take damage amount :" << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << Name << " Repaired " << "amount :" << amount <<std::endl;

}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor" << std::endl;
}
