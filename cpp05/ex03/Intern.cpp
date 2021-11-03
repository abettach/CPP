#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern const &other)
{
    *this = other;
}

Intern &Intern::operator=(Intern const &other)
{
    (void)other;
    return *this;
}

Form *get_ShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form *get_RobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form *getprecisionidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string Forme_name, std::string Forme_target)
{
    std::string Check_name[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    ptr_fun frm_ptr[3] = {get_ShrubberyCreationForm, get_RobotomyRequestForm, getprecisionidentialPardonForm};
    Form *f;
    for (int i = 0; i < 3 ; i++)
        if (Check_name[i] == Forme_name)
        {
            f = frm_ptr[i](Forme_target);
            std::cout << "Intern creates " + f->getName() << std::endl;
            return (f);
        }
    std::cout << "The form is not known" << std::endl;
    return (NULL);
}

Intern::~Intern(){}