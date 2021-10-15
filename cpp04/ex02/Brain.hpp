#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &other);
		Brain &operator=(const Brain &other);
        void    setIdeas();
        void    setIdeas(std::string idea);
        std::string const *getIdeas( void ) const;
        ~Brain();
};


#endif