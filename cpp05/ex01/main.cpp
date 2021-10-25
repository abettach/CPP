#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {   
        Bureaucrat b("test_T1", 2);
        Form f("test_T2", 3, 6);
        b.signForm(f);
        std::cout << f;
    }
    
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const Form::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const Form::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
}