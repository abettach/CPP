#include "Fixed.hpp"    

int main( void ) 
{
    Fixed a; //value 0
    Fixed b( a ); // value = 0
    Fixed c; // value 0

    c = b; //value(c) = 0
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}