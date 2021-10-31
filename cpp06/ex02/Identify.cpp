
#include "Base.hpp"

Base *generate(void)
{
	srand(time(NULL));
	int num = rand() % 3;

	if (!num)
		return new A();
	else if (num == 1)
		return new B();
	else if(num == 2)
		return new C();
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
	try
	{
        A &a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        delete &a;
	}
	catch (std::exception &e){};

	try
	{
        B &b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        delete &b;
	}
	catch (std::exception &e){};

	try
	{
        C &c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        delete &c;
	}
	catch (std::exception &e){};
}

Base::~Base(void){}