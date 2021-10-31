#include "conversion.hpp"
#include <string>

conversion::conversion(/* args */)
{
    _point = false;
}

bool     conversion::toInt(std::string str)
{
    if (inf_check(str))
    {
        std::cout <<"Impossible";
        return false;
    }
    if (str == ONLY_POINT)
    {
        this->_int_num = 0;
        return true;
    }
    if (ischar(str))
    {
        this->_int_num = str[0];
    }
    else
        this->_int_num = atoi(str.c_str());
    return (true);
}

bool     conversion::toFloat(std::string str)
{
    if (inf_check(str))
        return true;
    if (str == ONLY_POINT)
    {
        this->_float_num = 0.0f;
        return true;
    }
    if (ischar(str))
        this->_float_num = this->_int_num;
    else
        this->_float_num = atof(str.c_str());
    return (true);
}

bool     conversion::toDouble(std::string str)
{
    if (inf_check(str))
        return true;
     if (str == ONLY_POINT)
    {
        this->_double_num = 0.0;
        return true;
    }
    if (ischar(str))
        this->_double_num = this->_float_num;
    else
        this->_double_num = atof(str.c_str());
    return (true);
}

bool     conversion::toChar(std::string str)
{
    if (inf_check(str))
    {
        std::cout <<"Impossible";
        return false;
    }
    if (str == ONLY_POINT)
    {
        this->_char_num = 46;
        return true;
    }
    toInt(str);
    this->_char_num = this->_int_num;
    if (this->_char_num < 32 || this->_char_num >= 127)
        return (false);
    return (true);
}

int    conversion::inf_check(std::string str)
{
    if (str == "nan" || str == "nanf" || str == "-inff"
        || str == "+inff" || str == "-inf" || str == "+inf")
    {
        if (str == "nan" ||  str == "-inf" || str == "+inf")
            return 1;
        if (str == "nanf" || str == "-inff" || str == "+inff")
            return 2;
    }
    return 0;
}

void    conversion::ft_print(std::string str)
{
    size_t i = 0;

    if (isdigit(str))
    {
        if (str == ".f")
            str = "0.0f";
        else if (str[0] == '.' && str[1])
            str = "0" + str;
        while (str[i] != '.' && str[i])
            i++;
        if (str[i] == '.')
            _point = true;
        {   
            std::cout << "Char : ";
            char_print(str);
            std::cout << std::endl;
        }
        {
            std::cout << "int : ";
            int_print(str);
            std::cout << std::endl;
        }
        {
            std::cout << "float : ";
            float_print(str);
            std::cout << std::endl;
        }
        {
            std::cout << "Double : ";
            double_print(str);
            std::cout << std::endl;
        }
    }
    else
        std::cout << "Error: Paramettre not Digite" << std::endl;
}

conversion::~conversion(){}