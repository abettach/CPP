#include "Brain.hpp"

Brain::Brain()
{
    std::cout<< "Brain default constractor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout<< "Brain copy constractor called" << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout<< "Brain Assignation operator called" << std::endl;
	if(this != &rhs)
	    for (size_t i = 0; i < 100; i++)
		    this->ideas[i] = rhs.ideas[i];
	return (*this);
}

void    Brain::setIdeas()
{
    std::cout<< "Brain setIdeas function" << std::endl;
	for (size_t i = 0; i < 100; i++)
		ideas[i] = "Idea " + std::to_string(i);
}

void    Brain::setIdeas(std::string idea)
{
    std::cout<< "Brain parametrise setIdeas function" << std::endl;
	for (size_t i = 0; i < 100; i++)
		ideas[i] = idea + " " + std::to_string(i);
}

std::string const *Brain::getIdeas( void ) const
{
    return this->ideas;
}

Brain::~Brain()
{
    std::cout<< "Brain Destractor fonction called" << std::endl;
}
