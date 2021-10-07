#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed{

    private:
        int value;
        static const int bits = 8;

    public:
        Fixed(const int int_nbr);
        Fixed(const float fl_nbr);
        Fixed(Fixed const &cop);
        Fixed();
        ~Fixed();
        float   toFloat( void ) const;
        int     toInt( void ) const;
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        Fixed&  operator=(const Fixed &cop);
        bool    operator>(const Fixed &var);
        bool    operator<(const Fixed &var);
        bool    operator>=(const Fixed &var);
        bool    operator<=(const Fixed &var);
        bool    operator==(const Fixed &var);
        bool    operator!=(const Fixed &var);
        Fixed   operator+(const Fixed &nbr);
        Fixed   operator-(const Fixed &nbr);
        Fixed   operator*(const Fixed &nbr);
        Fixed   operator/(const Fixed &nbr);
        Fixed&  operator++();
        Fixed   operator++(int);
        Fixed&  operator--();
        Fixed   operator--(int);
        static  Fixed &min(Fixed &f1, Fixed &f2);
        static  Fixed &max(Fixed &f1, Fixed &f2);
        static  const Fixed &max(const Fixed &f1, const Fixed &f2);
        static  const Fixed &min(const Fixed &f1, const Fixed &f2);

};

std::ostream&        operator<<(std::ostream &out, const Fixed &obj);

#endif