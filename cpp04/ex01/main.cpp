#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // int nbr = 10;
    // const Animal* animal[nbr];
    
    // for (int i = 0; i < nbr ; i++)
    // {
    //     if (i < (nbr / 2) - 1)
    //         animal[i] = new Dog();
    //     else
    //         animal[i] = new Cat;
    // }
    
    // for(int i=0 ; i < nbr ; i++)
    //     delete animal[i];

    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // delete j;//should not create a leak
    // delete i;

    std::cout << std::endl << "----------------------------------------" << std::endl;
    std::cout << "Deep copy test" << std::endl << std::endl;

    Dog basic;
    Dog tmp(basic);
    std::cout<< " andress = " << &basic << std::endl;
    std::cout<< " andress = " << &tmp << std::endl;

}