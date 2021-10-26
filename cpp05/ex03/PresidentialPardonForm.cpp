#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "Constructor Default the PresidentialPardonForm is Called!\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("Presidential Pardon", 25, 5)
{
    std::cout << "Constructor Parametrise the PresidentialPardonForm is Called!\n";
    this->_target = target;
}

void    PresidentialPardonForm::Action() const
{
    std::cout << this->_target + " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}