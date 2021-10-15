#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<< "WrongCat default constractor" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout<< "WrongCat copy constractor" << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongAnimal Assignation operator" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

std::string WrongCat::getType() const
{
    return this->type;
}

void    WrongCat::makeSound() const
{
    std::cout<< "WrongCat sound" <<std::endl;
}

WrongCat::~WrongCat()
{
    std::cout<< "WrongCat destractor" << std::endl;
}
