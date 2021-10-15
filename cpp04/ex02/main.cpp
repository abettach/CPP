#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int nbr  = 20;
	const Animal *animal[nbr];

	for (int i = 0; i < nbr; i++)
	{
        if (i < nbr / 2)
		    animal[i] = new Cat();
        else
		    animal[i] = new Dog();
	}
	for (int i = 0; i < nbr; i++)
			delete animal[i];

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;


	return (0);

}