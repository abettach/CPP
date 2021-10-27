#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
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
int Bureaucrat::getGrade() const
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

void    Bureaucrat::signForm(Form &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << this->getName() << " signs " << f.getName() <<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " cannot signs " << f.getName() 
        << " because " << e.what() << std::endl;
    }
    
}

void    Bureaucrat::executeForm(Form const &form)
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() + " executes " + form.getName() << std::endl;
    }
    
    catch(const std::exception& e)
    {
        std::cerr << this->getName() + " cannot executes " +
        form.getName() +   " because " << e.what() << std::endl;
    }
}

std::ostream & operator <<(std::ostream &ofs, Bureaucrat &b)
{
    ofs << b.getName() << ", Bureaucrat grade " << b.getGrade();
    return ofs;
}

Bureaucrat::~Bureaucrat(){}