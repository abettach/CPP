#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout<< "default constractor called" << std::endl;
    this->grade = 0;
}

Bureaucrat::Bureaucrat(Bureaucrat &other)
{
    std::cout<< "dopy constractor called" << std::endl;
    *this = other;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name (name)
{
    std::cout<< "parametrise constractor called" << std::endl;
    this->grade = grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "assigniation operator called" << std::endl;
    if (this != &other)
        this->grade = other.grade;
    return *this;
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
    if (this->grade > 150)
        throw GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade Too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade Too high");
}

int    Bureaucrat::getGrade()
{
    return (this->grade);
}

std::string    Bureaucrat::getName()
{
    return (this->name);
}

Bureaucrat::~Bureaucrat()
{
    std::cout<< "default destractor called" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &b)
{
    os << b.getName() + ",  bureaucrat grade " << b.getGrade() << std::endl;
    return os;
}