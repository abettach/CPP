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


	std::cout<< "-----------------------------------" <<std::endl;
	std::cout<< "           CAT Deep Copy TEST           " <<std::endl;
	Cat cat_t1;
	cat_t1.setBrain("CAT_T1");
	Cat cat_t2(cat_t1);
	std::cout << cat_t1.getType() << std::endl;
	cat_t1.getBrain();
	cat_t2.getBrain();

	cat_t2.setBrain("CAT_T2");

	cat_t1.getBrain();
	cat_t2.getBrain();

	std::cout<< "-----------------------------------" <<std::endl;
	std::cout<< "           DOG Deep Copy TEST           " <<std::endl;
	Dog dog_t1;
	dog_t1.setBrain("DOG_T1");
	Dog dog_t2(dog_t1);

	std::cout << dog_t1.getType() << std::endl;
	dog_t1.getBrain();
	dog_t2.getBrain();

	dog_t2.setBrain("DOG_T2");
	dog_t1.getBrain();
	dog_t2.getBrain();

	return (0);

}