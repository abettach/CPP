#include "Cure.hpp"

Cure::Cure()
{
   //std::cout<< "Cure default constractor" << std::endl;
    this->type = "cure";
}

Cure::Cure(const Cure &other)
{
   //std::cout<< "Cure copy constractor" << std::endl;
    this->type = "cure";
    *this = other;
}

Cure &Cure::operator=(const Cure &other)
{
   //std::cout << "Cure Assignation operator" << std::endl;
    if(this != &other)
        this->type = other.type;
    return *this;
}

std::string const &Cure::getType() const
{
   //std::cout<< "Cure getType called" <<std::endl;
    return (this->type);
}

void    Cure::use(ICharacter& target)
{
   std::cout<< "* haels " <<target.getName() << " wouds *" << std::endl;
}

AMateria *Cure::clone() const
{
    AMateria *m = new Cure();
   //std::cout<< "Cur clone fonction" << std::endl;
    return m;
}