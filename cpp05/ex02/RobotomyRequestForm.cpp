#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Default Constructor Called!" << std::endl;
    this->_target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request", 72, 45)
{
    std::cout << "RobotomyRequestForm Parametrise Constructor Called!" << std::endl;
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rb)
: Form("Robotomy Request", 72, 45)
{
    std::cout << "RobotomyRequestForm Copy Constractor Called!" << std::endl;
    *this = rb;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rb)
{
    std::cout << "RobotomyRequestForm Assigniation Operator Called" << std::endl;
    if (this != &rb)
        this->_target = rb._target;
    return (*this);
}

std::string RobotomyRequestForm::get_target() const
{
    return this->_target;
}

void    RobotomyRequestForm::Action() const
{
    srand(time(0));
    int r = rand() % 2;
    if (r)
        std::cout << this->_target + " has been robotomized successfully!" << std::endl;
    else
        std::cout << "It’s a failure" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destractor Called" << std::endl;
}