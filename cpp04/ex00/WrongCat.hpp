#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat &other);
        WrongCat &operator=(const WrongCat &other);
        void    makeSound() const;
        std::string getType() const;
        ~WrongCat();
};
#endif