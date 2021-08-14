#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int RawBits;
        static int const bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed& a);
        Fixed& operator = (Fixed& rhs);
        int     getRawBits();
        void    setRawBits(int const raw);

};
#endif