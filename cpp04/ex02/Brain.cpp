#include "Brain.hpp"

Brain::Brain()
{
    std::cout<< "Brain default constractor" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout<< "Brain copy constractor" << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout<< "Brain assignation operator" << std::endl;
	if(this != &rhs)
	    for (size_t i = 0; i < 100; i++)
		    this->ideas[i] = rhs.ideas[i];
	return (*this);
}


Brain::~Brain()
{
    std::cout<< "Brain destractor" << std::endl;
}
