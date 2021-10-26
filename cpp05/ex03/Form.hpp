#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
private:
    std::string const _name;
    int const _grade_sign;
    int const _grade_execute;
    bool _issigned;
public:
    Form();
    Form(std::string const, int const, int const);
    std::string get_name() const;
    int get_gradesign() const;
    int get_grade_execute() const;
    bool    get_signed() const;
    void beSigned(Bureaucrat &);
    virtual ~Form();
    virtual void Action() const = 0;
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
    
    class FormIsNotSigned : public std::exception
    {
        public:
            const char *what() const throw();
    };

    void    execute(Bureaucrat const &) const;

};

std::ostream &operator<<(std::ostream &, Form &);

#endif