#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
    :Form("Presidential Pardon", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &p)
    :Form("Presidential Pardon", 25, 5)
{
    *this = p;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &p)
{
    if (this != &p)
        this->target = p.target;
    return (*this);
}

std::string PresidentialPardonForm::gettarget() const
{
    return this->target;
}

void    PresidentialPardonForm::Action() const
{
    std::cout << this->target + " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){}