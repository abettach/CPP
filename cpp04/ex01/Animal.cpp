#include "Animal.hpp"

Animal::Animal()
{
    std::cout<< "Animal default constractor" << std::endl;
    this->type = "Animal";
}

Animal::Animal(std::string type)
{
    std::cout<< "Animal Parametrise constractor called"<< std::endl;
    this->type = type;
}

Animal::Animal(const Animal &other)
{
    std::cout<< "Animal copy constractor" << std::endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal Assignation operator" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void    Animal::makeSound() const
{
    std::cout<< "Animal sound" <<std::endl;
}

Animal::~Animal()
{
    std::cout<< "Animal destractor" << std::endl;
}
