#include "Form.hpp"

Form::Form() : _name("default_name"), _grade_sign(0), _grade_execute(0), _issigned(false)
{
    std::cout << "Constructor Default The Form is Called!" << std::endl;
}

Form::Form(std::string const name, int const grade_sign, int const grade_exec) 
        : _name(name), _grade_sign(grade_sign), _grade_execute(grade_exec)
{
    std::cout << "Constructor Parametrise The Form is Called!" << std::endl;
    if (this->_grade_sign < 1 || this->_grade_execute < 1)
        throw GradeTooHighException();
    else if (this->_grade_sign > 150 || this->_grade_execute > 150)
        throw GradeTooLowException();
    else
        this->_issigned = false;
}

std::string Form::get_name() const
{
    return ("\e[1;32m" + this->_name + "\e[0m");
}

int Form::get_gradesign() const
{
    return (this->_grade_sign);
}
int Form::get_grade_execute() const
{
    return (this->_grade_execute);
}
bool    Form::get_signed() const
{
    return (this->_issigned);
}

void    Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->_grade_sign)
        this->_issigned = true;
    else
        throw GradeTooLowException();
}

const char * Form::GradeTooHighException::what() const throw()
{
    return ("\e[1;31mThe grade is too hight!\e[0m");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("\e[1;31mThe grade is too low!\e[0m");
}

const char * Form::FormIsNotSigned::what() const throw()
{
    return ("\e[1;31mThe Form Is Not Signed!\e[0m");
}

Form::~Form()
{
}

void    Form::execute(Bureaucrat const & executor) const
{
    if (get_signed() == false)
        throw FormIsNotSigned();
    else if (executor.getGrade() > this->_grade_execute)
        throw GradeTooLowException();
    else
        Action();
}

std::ostream &operator<<(std::ostream &o, Form &f)
{
    o << "\e[1;37mState of the form : \e[0m\n" << f.get_name() + " Form required "
        + "\e[1;32m" << f.get_gradesign() << "\e[0m" << " grade to sign it, and "
        << "\e[1;32m" << f.get_grade_execute() << "\e[0m"
        << " grade to execute it, and Status of the Form "
        << ((f.get_signed()) ? "\e[1;32mIs Signed!\e[0m" : "\e[1;32mIs Not Signed!\e[0m") << std::endl;
    return (o);
}