#include "Dog.hpp"

Dog::Dog()
{
    std::cout<< "Dog default constractor" << std::endl;
    this->type = "Dog";
}

Dog::Dog(std::string type)
{
    std::cout<< "Dog parametrise constractor" << std::endl;
    this->type = type;
}

Dog::Dog(const Dog &other)
{
    std::cout<< "Dog copy constractor" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog Assignation operator" << std::endl;
    if (this != &other)
        this->type = other.type;
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
}
