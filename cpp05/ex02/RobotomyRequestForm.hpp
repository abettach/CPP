#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"
#include <stdlib.h>

class RobotomyRequestForm : public Form
{
private:
    std::string _target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string);
    RobotomyRequestForm(RobotomyRequestForm const &);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &);
    ~RobotomyRequestForm();
    void    Action() const;
    std::string    get_target() const;
};


#endif