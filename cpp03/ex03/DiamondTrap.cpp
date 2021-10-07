# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Diamondtrap Default constructor called" << std::endl;
    this->Hitpoints = FragTrap::Hitpoints;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "Diamondtrap paramitrise constructor called" << std::endl;
    this->Name = name;
    ClapTrap::Name = Name + "_clap_name";
    this->Hitpoints = FragTrap::Hitpoints;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;

}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    std::cout << "Diamondtrap Copy Constructor called" << std::endl;
    *this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap Assignation Operator called" << std::endl;
    if (this != &other)
    {
        this->Name = other.Name;
        ClapTrap::Name = Name + "_clap_name";
        this->Hitpoints = other.Hitpoints;
        this->Energy_points = other.Energy_points;
        this->Attack_damage = other.Attack_damage;
    }
    return (*this);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "whoAmI " << this->Name << " " << ClapTrap::Name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamondtrap Destructor called" << std::endl;
}