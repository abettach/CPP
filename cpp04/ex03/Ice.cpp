# include "Ice.hpp"

Ice::Ice()
{
   //std::cout<< "Ice default constractor called" << std::endl;
    this->type = "ice";
}

Ice::Ice(const Ice &other)
{
   //std::cout<< "Ice copy constractor called" << std::endl;
    this->type = "ice";
    *this = other;
}

Ice &Ice::operator=(const Ice &other)
{
   //std::cout << "Ice Assignation operator called" << std::endl;
    if(this != &other)
        this->type = other.type;
    return *this;
}

std::string const &Ice::getType() const
{
   //std::cout<< "Ice getType called" <<std::endl;
    return (this->type);
}

void    Ice::use(ICharacter& target)
{
   std::cout<< "* shoots an ice bolt at " <<target.getName() << " *"<< std::endl;
}

AMateria *Ice::clone() const
{
    AMateria *clone_ice = new Ice();

   //std::cout<< "Ice clone fonction called" << std::endl;
    return clone_ice;
}

Ice::~Ice()
{
    // std::cout<< "Ice Destractor fonction callede" << std::endl;
}