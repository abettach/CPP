#include "Intern.hpp"

Intern::Intern()
{

}

Form *get_shc_frm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form *get_rbr_frm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form *get_pp_frm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Intern::Intern(Intern const &i)
{
    *this = i;
}

Intern &Intern::operator=(Intern const &i)
{
    (void)i;
    return *this;
}

Form *Intern::makeForm(std::string name, std::string target)
{
    int i = -1;
    std::string str_name[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    ptr_fun frm_ptr[] = {get_shc_frm, get_rbr_frm, get_pp_frm};
    Form *f;
    while (++i < 3)
    {
        if (str_name[i] == name)
        {
            f = frm_ptr[i](target);
            std::cout << "Intern creates " + f->get_name() << std::endl;
            return (f);
        }
    }
    std::cout << "The form is not known" << std::endl;
    return (NULL);
}

Intern::~Intern()
{

}