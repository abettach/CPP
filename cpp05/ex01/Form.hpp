#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    std::string const name;
    bool sign_indicater;
    int const grade_sign;
    int const grade_execute;

public:
    Form();
    Form(Form const &other);
    Form(std::string const name, int const grade_sign, int const grade_execute);
    Form &operator=(Form const &other);
    void    beSigned(Bureaucrat &b);
    std::string getName() const;
    int get_grade_sign() const;
    int get_grade_execute() const;
    bool    get_signed();
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

std::ostream & operator <<(std::ostream &ofs, Form &f);

#endif