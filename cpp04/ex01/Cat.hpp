#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private:
        Brain* cat_brain;
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        void    makeSound() const;
        std::string getType() const;
        void setBrain();
        void setBrain(std::string idea);
        void getBrain();
        ~Cat();
};

#endif