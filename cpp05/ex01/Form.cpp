#include "Form.hpp"

Form::Form()
{
    std::cout << "Form copy constractor called" << std::endl;
}

Form::Form(Form &other)
{
    std::cout << "Form copy constractor called" << std::endl;
    *this = other;
}

Form &Form::operator=(const Form &other)
{
    std::cout << "Form assigniation operator called" << std::endl;
    if (this != &other)
    {
        this;
    }
    return *this;
}
Form::~Form()
{
    std::cout << "Form destractor Called" << std::endl;
}