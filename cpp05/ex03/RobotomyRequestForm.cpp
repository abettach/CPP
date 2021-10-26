#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Constructor Default the RobotomyRequestForm is Called!\n";
    this->_target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request", 72, 45)
{
    std::cout << "Constructor Parametrise the RobotomyRequestForm is Called!\n";
    this->_target = target;
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

}