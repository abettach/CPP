#include "Form.hpp"

Form::Form() : name("None"), sign_indicater(false), grade_sign(0), grade_execute(0){}

Form::Form(std::string const name, int const grade_sing, int const grade_execute)
    : name(name), grade_sign(grade_sing), grade_execute(grade_execute)
{
    if (this->grade_sign < 1 || this->grade_execute < 1)
        throw GradeTooHighException();
    else if (this->grade_sign > 150 || this->grade_execute > 150)
        throw GradeTooLowException();
    else
        this->sign_indicater = false;
}

Form::Form(Form const &other)
    :sign_indicater(other.sign_indicater), grade_sign(other.grade_sign), grade_execute(other.grade_execute)
{
    *this = other;
}

Form &Form::operator=(Form const &other)
{
    if (this != &other)
        this->sign_indicater = other.sign_indicater;
    return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Form Grade Too High");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Form Grade Too Low");
}

const char * Form::FormIsNotSigned::what() const throw()
{
    return ("The Form Is Not Signed!");
}

std::string Form::getName() const
{
    return this->name;
}

int     Form::get_grade_sign() const
{
    return this->grade_sign;
}

int     Form::get_grade_execute() const
{
    return this->grade_execute;
}

bool    Form::get_signed() const
{
    return this->sign_indicater;
}
void    Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->grade_sign)
        this->sign_indicater = true;
    else
        throw GradeTooLowException();
}

void    Form::execute(Bureaucrat const & exec) const
{
    if (get_signed() == false)
        throw FormIsNotSigned();
    else if (exec.getGrade() > this->grade_execute)
        throw GradeTooLowException();
    else
        Action();
}

std::ostream & operator <<(std::ostream &ofs, Form &f)
{
    ofs << "Form :" << std::endl \
    << f.getName() << " Form required " \
    << f.get_grade_sign() << " grade to sign it, and " \
    << f.get_grade_execute() << " grade to excure it, and status of the Form "
    << ((f.get_signed()) ? "Is Signed!" : "Is Not Signed!") << std::endl;

    return ofs;
}

Form::~Form(){}