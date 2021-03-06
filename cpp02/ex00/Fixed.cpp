#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout<< "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout<< "Destructor called"<< std::endl;
}

Fixed::Fixed(Fixed &copy)
{
    std::cout<< "Copy constructor called"<< std::endl;
    *this = copy;
}

Fixed   &Fixed::operator=(const Fixed &other)
{
    std::cout<< "Assignation operator called called"<< std::endl;
    if (this != &other)
        this->value = other.getRawBits();
    return (*this);
}

int     Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawbits member function called" << std::endl;
    this->value = raw;
}