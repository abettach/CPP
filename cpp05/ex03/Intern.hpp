#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(Intern const &);
    Intern &operator=(Intern const &);
    Form *makeForm(std::string, std::string);
    ~Intern();
};

typedef Form *  (*ptr_fun)(std::string);

#endif