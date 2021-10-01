#include "Zombie.hpp"

int main()
{
	Zombie	*z;
	int		nbr;

	z = zombieHorde(3, "Zombie");
	delete[] z;
	return (0);
}