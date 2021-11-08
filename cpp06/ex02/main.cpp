#include "Identify.hpp"

/*
	dynamic_cast is exclusively used for handling polymorphism.
	You can cast a pointer or reference to any polymorphic type to any other class
	type (a polymorphic type has at least one virtual function, declared or inherited).
	The dynamic_cast will seek out the desired object and return it if possible. If it can't
	it will return 0 in the case of a pointer, or throw std::bad_cast in the case of a reference.
*/

int main()
{
	Base *T1 = generate();

	identify(T1);
	std::cout << std::endl;
	identify(*T1);
	delete T1;

	return 0;
}