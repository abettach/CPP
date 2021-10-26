#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    std::string const _name;
    int _grade;
public:
    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    Bureaucrat();
    Bureaucrat(std::string const, int);
    std::string getName() const;
    int getGrade() const;
    void    increment();
    void    decrement();
    ~Bureaucrat();
    void    signForm(Form &);
    void    executeForm(Form const &);

};

std::ostream & operator <<(std::ostream &, Bureaucrat &);

#endif