#ifndef _SHRUBBERYTCREATIONFORM_HPP
#define _SHRUBBERYTCREATIONFORM_HPP
#include "Form.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

class ShrubberyCreationForm : public Form
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &other);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const  &other);
        std::string get_target() const;
        void   Action() const;
        ~ShrubberyCreationForm();
};

#endif