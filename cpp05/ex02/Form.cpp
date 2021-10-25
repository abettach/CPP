#include "Form.hpp"

Form::Form() : _name("default_name"), _grade_sign(0),
            _grade_execute(0), issigned(false)
{
    std::cout << "Constructor Default The Form is Called!" << std::endl;
}

Form::Form(std::string const name, int const grade_sign, int const grade_exec) 
        : _name(name), _grade_sign(grade_sign), _grade_execute(grade_exec)
{
    // std::cout << "Form parametrise constractor called" << std::endl;
    if (this->_grade_sign < 1 || this->_grade_execute < 1)
        throw GradeTooHighException();
    else if (this->_grade_sign > 150 || this->_grade_execute > 150)
        throw GradeTooLowException();
    else
        this->issigned = false;
}

Form::Form(Form const &new_f) : _name(new_f._name),
        _grade_sign(new_f._grade_sign),
        _grade_execute(new_f._grade_execute)
{
    std::cout << "Form Copy Constractor Called" << std::endl;
    *this = new_f;
}

Form &Form::operator=(Form const &other)
{
    if (this != &other)
        this->issigned = other.issigned;
    return (*this);
}

std::string Form::get_name() const
{
    // std::cout << "Form get_name function called" << std::endl;
    return (this->_name);
}

int Form::get_grade_sign() const
{
    // std::cout << "Form get_grade_sign function called" << std::endl;
    return (this->_grade_sign);
}

int Form::get_grade_execute() const
{
    // std::cout << "Form get_grade_execute function called" << std::endl;
    return (this->_grade_execute);
}

bool    Form::get_sighned() const
{
    // std::cout << "Form get_sighned function called" << std::endl;
    return (this->issigned);
}

void    Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->_grade_sign)
        this->issigned = true;
    else
        throw GradeTooLowException();
}

const char * Form::GradeTooHighException::what() const throw()
{
    return ("The grade is too hight!");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("The grade is too low!");
}

std::ostream &operator<<(std::ostream &out1, Form &f)
{
    out1 << "Form : \n" << f.get_name() + " Form required "
        + "" << f.get_grade_sign() << "" << " grade to sign it, and "
        << "" << f.get_grade_execute() << ""
        << " grade to execute it, and Status of the Form "
        << ((f.get_sighned()) ? "Is Signed!" : "Is Not Signed!") << std::endl;
    return (out1);
}

Form::~Form()
{
    std::cout << "Form Destractor called" << std::endl;
}