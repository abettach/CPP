#include "Bureaucrat.hpp"

int     main(void)
{
    try
    {
        Bureaucrat b("test1", 150);
        std::cout << b <<std::endl;
        b.increment();
        std::cout << b <<std::endl;

        Bureaucrat b2("test2", 1);
        std::cout << b2 <<std::endl;;
        b2.decrement();
        std::cout << b2 <<std::endl;;

        Bureaucrat b3("test3", 148);
        std::cout << b3 <<std::endl;;
        b3.decrement();
        std::cout << b3 <<std::endl;;

        Bureaucrat b4("test4", 1) ;
        std::cout << b4 <<std::endl;;
        b4.increment();
        std::cout << b4 <<std::endl;;
    }

    catch(std::exception& e)
    { 
        std::cerr << e.what() << '\n';
    }
    return 0;
}