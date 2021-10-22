#ifndef FORM_HPP
#define FROM_HPP
#include <iostream>

class Form
{
    private:
        std::string const name;
        bool issigned;
        int const grade_sign;
        int const grade_execute;
    public:
        Form();
        Form(Form &other);
        ~Form();
        Form &operator=(const Form &other);
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
};


#endif