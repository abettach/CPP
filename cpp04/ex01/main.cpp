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
    

    // delete j;//should not create a leak
    // delete i;

    
    Dog basic;
    Dog tmp(basic);
    std::cout<< " andress = " << &basic << std::endl;
    std::cout<< " andress = " << &tmp << std::endl;

}