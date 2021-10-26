#ifndef SHRUBBERYCRATONFORM_HPP
#define SHRUBBERYCRATONFORM_HPP
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;
        std::string tree_data;
    public:
        ShrubberyCreationForm(/* args */);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &other);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
        void    Action() const;
        ~ShrubberyCreationForm();
};


#endif