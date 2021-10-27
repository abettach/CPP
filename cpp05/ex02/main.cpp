#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat b("B1", 1);
        Form *f = new ShrubberyCreationForm("Shrubbery_T1");
        f->beSigned(b);
        b.executeForm(*f);

        std::cout << std::endl;
        Bureaucrat b2("B2", 2);
        Form *f2 = new RobotomyRequestForm("Robotomy_T2");
        f2->beSigned(b2);
        b2.executeForm(*f2);
        
        std::cout << std::endl;
        Bureaucrat b3("B3", 2);
        Form *f3 = new PresidentialPardonForm("PresidentialPardon_T3");
        f3->beSigned(b3);
        b3.executeForm(*f3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}