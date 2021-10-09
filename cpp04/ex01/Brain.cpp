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

// Brain &Brain::operator=(const Brain &other)
// {
//     std::cout << "Brain Assignation operator" << std::endl;
//     if (this != &other)
//         this->type = other.type;
//     return *this;
// }


Brain::~Brain()
{
    std::cout<< "Brain destractor" << std::endl;
}
