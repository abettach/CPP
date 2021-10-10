#include "Dog.hpp"

Dog::Dog()
{
    std::cout<< "Dog default constractor" << std::endl;
    this->type = "Dog";
    this->dog_brain = new Brain();
}

Dog::Dog(const Dog &other)
{
    std::cout<< "Dog copy constractor" << std::endl;
    this->dog_brain = new Brain();
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "ClapTrap Assignation operator" << std::endl;
    if (this != &other)
    {
        *this->dog_brain = *other.dog_brain;
        this->type = other.type;
    }
    return *this;
}

std::string Dog::getType() const
{
    return this->type;
}

void    Dog::makeSound() const
{
    std::cout<< "Dog sound" <<std::endl;
}

Dog::~Dog()
{
    std::cout<< "Dog destractor" << std::endl;
    delete this->dog_brain;
}
