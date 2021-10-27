#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
    	static std::string const tree_data;
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string);
        ShrubberyCreationForm(ShrubberyCreationForm const &);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
        ~ShrubberyCreationForm();
        std::string    gettarget() const;
        void    Action() const;
};

#endif