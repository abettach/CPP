#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Nothing"), _grade(0)
{
    std::cout << "Constructor Bureaucrat Called!" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return "\e[1;32m" + this->_name + "\e[0m";
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "\e[1;31mthe Bureaucrat grade gets too high\e[0m";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "\e[1;31mthe Bureaucrat grade gets too low\e[0m";
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
    std::cout << "Constructor Parametrise is Called!" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->_grade = grade;
}

void    Bureaucrat::increment()
{
    this->_grade--;
    if (this->_grade < 1)
        throw GradeTooHighException();
}

void    Bureaucrat::decrement()
{
    this->_grade++;
    if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
    return ;
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
        std::cerr << this->getName() + " \e[1;31mcannot sign\e[0m " + f.get_name() + " \e[1;31mbecause\e[0m " << e.what() << '\n';
    }
    
}

void    Bureaucrat::executeForm(Form const &form)
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() + " executes " + form.get_name() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() + " cannot executes " + form.get_name() + 
                        " because " << e.what() << '\n';
    }
    
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &b)
{
    os << "Bureaucrat name " + b.getName() + ",  bureaucrat grade " + "\e[1;32m" << b.getGrade() << "\e[0m." << std::endl;
    return os;

}
