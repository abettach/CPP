#include "Zombie.hpp"

int main()
{
	Zombie	*z;
	int nbr;

	nbr = 4;
	if (nbr <= 0)
	{
		std::cout<< "Error: check your number"<< std::endl;
	}
	else
	{
		z = zombieHorde(nbr, "Zombie");
		delete[] z;
	}
	return (0);
}