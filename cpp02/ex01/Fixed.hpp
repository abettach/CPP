#ifndef _FIXED_HPP_
#define _FIXED_HPP_
#include <iostream>
#include <cmath>

class Fixed {
    private:
        int value;
        const static int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed(int const nb);
        Fixed(float const nb);
        ~Fixed();
        Fixed(Fixed &copy);
        Fixed& operator=(const Fixed& other);
        int getRawBits( void ) const; 
        void setRawBits( int const raw );
        int toInt(void) const;
        float toFloat(void) const;

};
std::ostream   &operator<<(std::ostream &out, Fixed const &obj);
#endif