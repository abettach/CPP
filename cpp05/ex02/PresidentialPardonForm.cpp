#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Default Constructor Called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
    :Form("Presidential Pardon", 25, 5)
{
    std::cout << "PresidentialPardonForm Parametrise Constructor Called!" <<std::endl;
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &p)
    :Form("Presidential Pardon", 25, 5)
{
    std::cout << "Form Copy Constractor Called!" << std::endl;
    *this = p;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &p)
{
    std::cout << "Presidential Assigniation Operator called!" << std::endl;
    if (this != &p)
        this->_target = p._target;
    return (*this);
}

std::string PresidentialPardonForm::get_target() const
{
    return this->_target;
}

void    PresidentialPardonForm::Action() const
{
    std::cout << this->_target + " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Presidential Destractor Called" << std::endl;
}