#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal &operator=(const WrongAnimal &other);
        virtual void  makeSound() const = 0;
        virtual std::string getType() const;
        virtual ~WrongAnimal();
};

#endif