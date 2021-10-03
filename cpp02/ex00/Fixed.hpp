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
        ~Fixed();
        Fixed(Fixed &copy);
        Fixed& operator=(Fixed& rhs);
        int getRawBits( void ) const; 
        void setRawBits( int const raw );
};

#endif