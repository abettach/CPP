#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Constructor" << std::endl;
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string Name)
{
    std::cout << "ScavTrap paramitrise constructor" << std::endl;
    this->Name = Name;
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "ScavTrap Copy Constructor" << std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    if (this != &other)
    {
        this->Name = other.Name;
        this->Hitpoints = other.Hitpoints;
        this->Energy_points = other.Energy_points;
        this->Attack_damage = other.Attack_damage;
    }
    return (*this);
}

void ScavTrap::attack(const std::string &target)
{
    std::cout << "ScavTrap " << Name
        << " attack " << target << " ,causing "
        << Attack_damage << " points of damage !" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor" << std::endl;
}
