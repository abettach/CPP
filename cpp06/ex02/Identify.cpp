
#include "Identify.hpp"

Base *generate(void)
{
	srand(time(NULL));
	int num = rand() % 3;

	if (!num)
		return new A();
	else if (num == 1)
		return new B();
	else
		return new C();
	return NULL;
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A";
	else if (dynamic_cast<B *>(p))
		std::cout << "B";
	else if (dynamic_cast<C *>(p))
		std::cout << "C";
}

void identify(Base &p)
{
	A a;
	B b;
	C c;

	try
	{
        a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;

	}
	catch (std::exception &e){};

	try
	{
        b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
	}
	catch (std::exception &e){};

	try
	{
        c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
	}
	catch (std::exception &e){};
}

Base::~Base(void){}