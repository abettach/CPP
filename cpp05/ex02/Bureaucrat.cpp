#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name_("Nothing"), grade(0)
{
    std::cout << "Bereaucrat Deafault constractor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name_(name)
{
    if (grade < 1)
        GradeTooHighException();
    else if (grade > 150)
        GradeTooLowException();
    this->grade = grade;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &new_bur)
{
    if (this != &new_bur)
        this->grade = new_bur.grade;
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (this->_name_);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "the Bureaucrat grade gets too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "the Bureaucrat grade gets too low";
}

Bureaucrat::Bureaucrat(Bureaucrat const &new_bur)
{
    *this = new_bur;
}

void    Bureaucrat::increment()
{
    this->grade--;
    if (this->grade < 1)
        throw GradeTooHighException();
}

void    Bureaucrat::decrement()
{
    this->grade++;
    if (grade > 150)
        throw GradeTooLowException();
}

void    Bureaucrat::signForm(Form &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << this->getName() + " signs " + f.get_name() << std::endl;
    }
    catch(const Form::GradeTooLowException &e)
    {
        std::cerr << this->getName() + " cannot sign " + f.get_name() + " because " << e.what() << '\n';
    } 
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &b)
{
    os << "Bureaucrat name " + b.getName() + ",  bureaucrat grade " + "\e[1;32m" << b.getGrade() << "\e[0m." << std::endl;
    return os;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destractor called" << std::endl;
}
