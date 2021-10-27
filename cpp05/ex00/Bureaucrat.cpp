#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
    this->grade_range = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
    if (this != &other)
        this->grade_range = other.grade_range;
    return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat Grade is too High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat Grade is too Low");
}

std::string Bureaucrat::getName() const
{
    return this->name;
}
int Bureaucrat::getGrade()
{
    return this->grade_range;
}

void    Bureaucrat::increment()
{
    (--this->grade_range < 1) ? throw GradeTooHighException() : this->grade_range;
}

void    Bureaucrat::decrement()
{
    (++this->grade_range > 150) ? throw GradeTooLowException() : this->grade_range;
}

std::ostream & operator <<(std::ostream &ofs, Bureaucrat &b)
{
    ofs << b.getName() << ", Bureaucrat grade " << b.getGrade();
    return ofs;
}

Bureaucrat::~Bureaucrat(){}