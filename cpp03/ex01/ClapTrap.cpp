#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Hitpoints(10), Energy_points(10), Attack_damage(0)
{
    std::cout <<"ClapTrap Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : Hitpoints(10), Energy_points(10), Attack_damage(0), Name(Name)
{
    std::cout << "ClapTrap paramitrise constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    std::cout << "ClapTrap Assignation operator" << std::endl;
    if (this != &rhs)
    {
        this->Name = rhs.Name;
        this->Hitpoints = rhs.Hitpoints;
        this->Energy_points = rhs.Energy_points;
        this->Attack_damage = rhs.Attack_damage;
    }
    return *this;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << Name
    << " attack " << target << " ,causing "
    << Attack_damage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << Name << " take damage amount :" << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << Name
    << " Repaired " << "amount :"
    << amount <<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor" << std::endl;
}