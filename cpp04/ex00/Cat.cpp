#include "Cat.hpp"

Cat::Cat()
{
    std::cout<< "Cat default constractor" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &other)
{
    std::cout<< "Cat copy constractor" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "ClapTrap Assignation operator" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

std::string Cat::getType() const
{
    return this->type;
}

void    Cat::makeSound() const
{
    std::cout<< "Cat sound" <<std::endl;
}

Cat::~Cat()
{
    std::cout<< "Cat destractor" << std::endl;
}
