#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string const name;
        int grade_range;
    public:
        Bureaucrat();
        Bureaucrat(Bureaucrat const &other);
        Bureaucrat(std::string const name, int grade);
        Bureaucrat &operator=(Bureaucrat const &other);
        ~Bureaucrat();
        std::string    getName() const;
        int    getGrade();
        void    increment();
        void    decrement();
        void    signForm(Form &f);
        class GradeTooHighException : public std::exception
        {
            public :
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public :
                const char *what() const throw(); 
        };
};

std::ostream & operator <<(std::ostream &ofs, Bureaucrat &b);

#endif