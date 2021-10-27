#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string);
        PresidentialPardonForm(PresidentialPardonForm const &);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &);
        ~PresidentialPardonForm();
        void    Action() const;
        std::string    gettarget() const;
};

#endif