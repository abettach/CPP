#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Constructor Called" << std::endl;
    this->Hitpoints = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string Name)
{
    std::cout << "FragTrap ClapTrap paramitrise constructor" << std::endl;
    this->Name = Name;
    this->Hitpoints = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "FragTrap Copy Constructor Called" << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap Assignation Operator Called" << std::endl;
    if (this != &other)
    {
        this->Name = other.Name;
        this->Hitpoints = other.Hitpoints;
        this->Energy_points = other.Energy_points;
        this->Attack_damage = other.Attack_damage;
    }
    return (*this);
}

void FragTrap::attack(const std::string &target)
{
    std::cout << "FragTrap " << Name
    << " attack " << target << " ,causing "
    << Attack_damage << " points of damage !" << std::endl;
}


void FragTrap::highFivesGuys(void)
{
    std::cout << "Positive high fives" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called" << std::endl;
}