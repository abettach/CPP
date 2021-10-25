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
        bool issigned;
    public:
        Form();
        Form(std::string const, int const, int const);
        Form(Form const &);
        Form &operator=(Form const &);
        std::string get_name() const;
        int get_grade_sign() const;
        int get_grade_execute() const;
        bool    get_sighned() const;
        void beSigned(Bureaucrat &);
        ~Form();

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

};

std::ostream &operator<<(std::ostream &, Form &);

#endif