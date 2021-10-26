#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat B_T1("B_t1", 1);
        Form F_T1("F_T1", 1, 5);
        B_T1.signForm(F_T1);
        std::cout << F_T1;
    
        Bureaucrat B_T2("B_t2", 10);
        Form F_T2("F_T2", 1, 5);
        B_T2.signForm(F_T2);
        std::cout << F_T2;
    
        Bureaucrat B_T3("B_t3", 160);
        Form F_T3("F_T3", 1, 5);
        B_T3.signForm(F_T3);
        std::cout << F_T3;


    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}