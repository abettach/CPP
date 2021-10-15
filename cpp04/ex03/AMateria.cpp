#include "AMateria.hpp"

AMateria::AMateria()
{
   //std::cout<< "AMateria default constractor" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
   //std::cout<< "AMateria string constractor" << std::endl;
    this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
   //std::cout<< "AMateria copy constractor" << std::endl;
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
   //std::cout << "AMateria Assignation operator" << std::endl;
    if(this != &other)
        this->type = other.getType();
    return *this;
}

std::string const &AMateria::getType() const
{
   //std::cout<< "AMateria getType called" <<std::endl;
    return (this->type);
}

AMateria::~AMateria()
{
   //std::cout<< "AMateria Destractor" << std::endl;
}