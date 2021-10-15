#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* dog_brain;
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        std::string getType() const;
        void    makeSound() const;
        void setBrain();
        void setBrain(std::string idea);
        void getBrain();
        ~Dog();
};

#endif