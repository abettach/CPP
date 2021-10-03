#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout<< "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout<< "Copy constructor called"<< std::endl;
    *this = (Fixed&)copy;
}

Fixed::Fixed(const int nb)
{
    std::cout<< "int constructor called"<< std::endl;
    value = roundf(nb * (1 << bits));
    std::cout<< "int ==> nb ="<< nb<< ", 1 << bits=" << (1 << bits)<< ", roundf=" << value <<std::endl;
}

Fixed::Fixed(const float nb)
{
    std::cout<< "float constructor called"<< std::endl;
    value = roundf(nb * (1 << bits));
    std::cout<< "int ==> nb ="<< nb<< ", 1 << bits=" << (1 << bits)<< ", roundf=" << value <<std::endl;
}

Fixed::~Fixed()
{
    std::cout<< "Destructor called"<< std::endl;
}

Fixed   &Fixed::operator=(const Fixed &rhs)
{
    std::cout<< "Assignation operator called"<< std::endl;
    if (this != &rhs)
        this->value = rhs.value;
    return (*this);
}

std::ostream   &operator<<(std::ostream &out, Fixed const &rhs)
{
    std::cout<< "Assignation operator << called"<< std::endl;
    out << rhs.toFloat();
    return (out);
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

float Fixed::toFloat(void) const //x << y = x*(2^y)
{
    return (float)((float)value / (float)(1 << bits));
}

int Fixed::toInt(void) const //x >> y = x/(2^y)
{
    return (int)(value >> bits);
}