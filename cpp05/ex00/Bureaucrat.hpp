#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
private:
    std::string const name;
    int grade_range;
public:
    Bureaucrat(/* args */);
    Bureaucrat(Bureaucrat const &other);
    Bureaucrat(std::string const name, int grade);
    Bureaucrat &operator=(Bureaucrat const &other);
    ~Bureaucrat();
    std::string    getName() const;
    int    getGrade();
    void    increment();
    void    decrement();
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