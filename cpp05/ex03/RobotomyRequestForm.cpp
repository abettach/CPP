#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rb)
: Form("Robotomy Request", 72, 45)
{
    *this = rb;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rb)
{
    if (this != &rb)
        this->target = rb.target;
    return (*this);
}

std::string RobotomyRequestForm::gettarget() const
{
    return this->target;
}

void    RobotomyRequestForm::Action() const
{
    srand(time(0));
    int r = rand() % 2;
    if (r)
        std::cout << this->target + " has been robotomized successfully!" << std::endl;
    else
        std::cout << "It’s a failure" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){}