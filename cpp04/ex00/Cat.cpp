#include "Cat.hpp"

Cat::Cat()
{
    std::cout<< "Cat default constractor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(std::string type)
{
    std::cout<< "Cat parametrise constractor called" << std::endl;
    this->type = type;
}

Cat::Cat(const Cat &other)
{
    std::cout<< "Cat copy constractor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Assignation operator called" << std::endl;
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
    std::cout<< "Cat Destractor fonction called" << std::endl;
}
