#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what () const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what () const throw();
        };
        Bureaucrat();
        Bureaucrat(Bureaucrat &other);
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &other);
        std::string    getName();
        int    getGrade();
        void    increment();
        void    decrement();
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &b);


#endif