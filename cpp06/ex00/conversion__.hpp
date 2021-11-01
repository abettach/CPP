#ifndef CONVERSION_HPP
#define CONVERSION_HPP
#include <iostream>
#include <string>
#include <limits>
# include <cstdlib>
#include <iomanip>
#define INT_TYPE 1
#define CHAR_TYPE 2
#define FLOAT_TYPE 3
#define DOUBLE_TYPE 4

class conv
{
private:
    int int_value;
    float float_value;
    char char_value;
    double double_value;
    bool is_impossible;
    bool non_displayable;
    int type_value;
    int type;
    int precision;
public:
    int    getType(std::string str);
    void    setType(std::string str);
    void    getValue(std::string str);
    void     setPrecision(std::string value);
    void    print();
     conv();
     ~conv();
};




#endif