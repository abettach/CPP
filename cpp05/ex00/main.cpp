#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat B_T1("test_t1", 1);
        B_T1.decrement();

        Bureaucrat B_T2("test_t2", 49);
        B_T2.increment();

        Bureaucrat B_T3("test_t3", 150);
        B_T3.decrement();

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}