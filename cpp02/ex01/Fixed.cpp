#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout<< "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout<< "Copy constructor called"<< std::endl;
    *this = copy;
}

Fixed::Fixed(const int nb)
{
    std::cout<< "int constructor called"<< std::endl;
    value = roundf(nb * (1 << bits));
}

Fixed::Fixed(const float nb)
{
    std::cout<< "float constructor called"<< std::endl;
    value = roundf(nb * (1 << bits));
}

Fixed   &Fixed::operator=(const Fixed &other)
{
    std::cout<< "Assignation operator called called"<< std::endl;
    if (this != &other)
        this->value = other.value;
    return (*this);
}

std::ostream   &operator<<(std::ostream &out, Fixed const &obj)
{
    out << obj.toFloat();
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

Fixed::~Fixed()
{
    std::cout<< "Destructor called"<< std::endl;
}