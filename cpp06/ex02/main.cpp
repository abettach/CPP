#include "Identify.hpp"

int main()
{
	Base *p = generate();

	identify(p);
	std::cout << std::endl;
	identify(*p);
	std::cout << std::endl;
	return 0;
}