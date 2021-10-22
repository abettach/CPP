#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
   //std::cout<< "MateriaSource default constractor called" << std::endl;
    this->counter = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
   //std::cout<< "MateriaSource copy constractor called"<< std::endl;
    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
   //std::cout<< "MateriaSource assigniation operator" << std::endl;
    if (this != &other)
    {
        this->counter = other.counter;
        for (int i = 0; i < counter; i++)
            this->source[i] = other.source[i]->clone();
    }
    return *this;
}


void    MateriaSource::learnMateria(AMateria* m)
{
   //std::cout<< "MateriaSource learnMateria" << std::endl;
    if (counter >= 0 && counter < 4)
    {
        source[counter] = m;
        counter++;
    }
//    else
//        std::cout<< "cant learn anymore" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
   //std::cout << "create Materia function" << std::endl;
    for (int i = 0; i < counter; i++)
        if (source[i]->getType() == type)
            return (source[i]->clone());
    return 0;
}

MateriaSource::~MateriaSource()
{
   //std::cout<< "MateriaSource Destractor fonction called called" << std::endl;
}