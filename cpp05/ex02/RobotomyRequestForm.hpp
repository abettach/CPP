#ifndef ROBOTOMYREAUESTFORM_HPP
#define ROBOTOMYREAUESTFORM_HPP
#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &other);
        RobotomyRequestForm &operator=(RobotomyRequestForm const  &other);
        std::string get_target() const;
        void   Action() const;
        ~RobotomyRequestForm();
};

#endif