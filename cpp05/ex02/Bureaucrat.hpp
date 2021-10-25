#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat{
    private:
        std::string const _name_;
        int grade;
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
        Bureaucrat(std::string);
        Bureaucrat(Bureaucrat const &);
        Bureaucrat(std::string, int);
        Bureaucrat& operator=(Bureaucrat const &);
        ~Bureaucrat();
        std::string getName() const;
        int getGrade() const;
        void  increment();
        void  decrement();
        void    signForm(Form &);
};

std::ostream & operator <<(std::ostream &, Bureaucrat &);


#endif