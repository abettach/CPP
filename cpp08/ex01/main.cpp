#include "span.hpp"

int main()
{
    Span sp = Span(5);

    std::cout << "~~~~~~~~~~~~~~~~~~SUBJECT TEST~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    try
    {
	    sp.addNumber(5);
	    sp.addNumber(3);
	    sp.addNumber(17);
	    sp.addNumber(9);
	    sp.addNumber(11);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;


    std::cout << "~~~~~~~~~~~~~~~~~~~~~~TEST1~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    Span sp_2 = Span(1000);
    for (int i = 0; i < 1500 ; i++)
    {
        try
        {
            sp_2.addNumber(i);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            break;
        }
    }
    try
    {
        Span sp_err = Span(1);

        sp_err.addNumber(5);
        std::cout << sp_err.shortestSpan() << std::endl;
        std::cout << sp_err.longestSpan() << std::endl;
    }

    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~TEST2~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    Span sp_3(100000);

    try
    {
        sp_3.addNumber(500, 9587);
        std::cout << sp_3.shortestSpan() << std::endl;
        std::cout << sp_3.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;   
}