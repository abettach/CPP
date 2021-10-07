#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(Fixed const &copy)
{
	*this = copy;
}

Fixed::Fixed(const int nb)
{
	this->value = roundf(nb * (1 << bits));
}

Fixed::Fixed(const float nb)
{
    this->value = roundf((nb * (1 << bits)));
}

Fixed::~Fixed()
{
}

Fixed   &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        this->value = other.value;
    return (*this);
}

std::ostream&	operator <<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return (float)((float)value / (float)(1 << bits));
}

int Fixed::toInt( void ) const
{
    return (int)(value >> bits);
}

bool Fixed::operator>(const Fixed &var)
{
    return (this->value > var.value);
}

bool Fixed::operator<(const Fixed &var)
{
    return (this->value < var.value);
}

bool Fixed::operator>=(const Fixed &var)
{
    return (value >= var.value);
}

bool Fixed::operator<=(const Fixed &var)
{
    return (value <= var.value);
}

bool Fixed::operator==(const Fixed &var)
{
    return (value == var.value);
}

bool Fixed::operator!=(const Fixed &var)
{
    return (value != var.value);
}

Fixed   Fixed::operator+(const Fixed &nbr)
{
    Fixed ret;

    ret.value = this->value + nbr.value;
    return (ret);
}

Fixed   Fixed::operator-(const Fixed &nbr)
{
    Fixed ret;

    ret.value = this->value - nbr.value;
    return (ret);
}

Fixed   Fixed::operator*(const Fixed &nbr)
{
    Fixed tmp;
    
    tmp.value  = this->value  * nbr.value;
    tmp.value  = tmp.toFloat();
    return tmp;
}

Fixed   Fixed::operator/(const Fixed &nbr)
{
    Fixed tmp;
    tmp.value  = this->value  / nbr.toFloat();
    return tmp;
}

Fixed& Fixed::operator++() //++a
{
    ++value;
    return (*this);
}

Fixed   Fixed::operator++(int) //a++
{
    Fixed tmp(*this);
    this->operator++();
    return (tmp);
}

Fixed& Fixed::operator--() //--a
{
    --value;
    return (*this);
}

Fixed   Fixed::operator--(int) //a--
{
    Fixed tmp(*this);
    this->operator--();
    return (tmp);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 <= f2)
        return f1;
    else
        return f2;
    
}

Fixed const &Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if ((Fixed)f1 <= (Fixed)f2)
        return f1;
    else
        return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 >= f2)
        return f1;
    else
        return f2;
}

Fixed const &Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if ((Fixed)f1 >= (Fixed)f2)
        return f1;
    else
        return f2;
}