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
    ~RobotomyRequestForm();
    void    Action() const;
};


#endif