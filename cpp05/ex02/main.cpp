#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        std::cout << "_____________________________________________\n";
        std::cout << "\t\t\e[1;37mFirst Test:\e[0m\n"; 
        std::cout << "\t\t\e[1;37m-----------\e[0m\n"; 
        Bureaucrat b("B1", 1);
        Form *f = new ShrubberyCreationForm("SH1");
        f->beSigned(b);
        b.executeForm(*f);
        
        std::cout << "_____________________________________________\n";
        std::cout << "\t\t\e[1;37mSecond Test:\e[0m\n"; 
        std::cout << "\t\t\e[1;37m-----------\e[0m\n"; 
        Bureaucrat b2("B2", 2);
        Form *f2 = new RobotomyRequestForm("RB1");
        f2->beSigned(b2);
        b2.executeForm(*f2);
        
        std::cout << "_____________________________________________\n";
        std::cout << "\t\t\e[1;37mThird Test:\e[0m\n"; 
        std::cout << "\t\t\e[1;37m-----------\e[0m\n"; 
        Bureaucrat b3("B3", 2);
        Form *f3 = new PresidentialPardonForm("PRP1");
        f3->beSigned(b3);
        b3.executeForm(*f3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}