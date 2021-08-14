#include "Fixed.hpp"

Fixed::Fixed(void) : RawBits(0)
{
    std::cout<< "Default constractor called"<<std::endl;
    return;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed& a)
{
    std::cout<< "copy constractor called"<<std::endl;
    *this = a;
    return;
}


Fixed& Fixed::operator=(Fixed& rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->RawBits = rhs.getRawBits();
    return *this;
}

int     Fixed::getRawBits(void)
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->RawBits;
}   

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawbits member function called" << std::endl;
    this->RawBits = raw;
}