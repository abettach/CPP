#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<< "WrongAnimal default constractor" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout<< "WrongAnimal parametrise constractor" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout<< "WrongAnimal copy constractor" << std::endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "WrongAnimal Assignation operator" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void    WrongAnimal::makeSound() const
{
    std::cout<< "WrongAnimal sound" <<std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<< "WrongAnimal destractor" << std::endl;
}
