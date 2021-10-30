#include "conversion.hpp"

void    conversion::char_print(std::string str)
{
    if (toChar(str))
        std::cout << "'" << this->_char_num << "'";
    else if (!inf_check(str))
        std::cout << "Non Displayable";
}
void    conversion::int_print(std::string str)
{
    if (toInt(str))
        std::cout << this->_int_num;
}
void    conversion::float_print(std::string str)
{
    if (toFloat(str))
    {
        if (inf_check(str))
        {
            if (inf_check(str) == 1)
                std::cout << str << "f";
            else if (inf_check(str) == 2)
                        std::cout << str;
        }
        else
        {
            if (!this->_point)
                std::cout << this->_float_num << FALSE_POINT_F;
            else if (this->_point)
            {
                std::string after_point;
                int i = 0;
                while (str[i] != '.')
                    i++;
                if (str[++i])
                    for (int j = 0; str[i] ; j++)
                        after_point[j] = str[i++];
                else
                    after_point = "0";
                if (!std::stoi(after_point))
                    std::cout << this->_float_num << FALSE_POINT_F;
                else
                    std::cout << this->_float_num << TRUE_POINT_F;
            }
        }
    }
}
void    conversion::double_print(std::string str)
{
    if (toDouble(str))
    {
        if (inf_check(str))
        {
            if (inf_check(str) == 1)
                std::cout << str;
            else if (inf_check(str) == 2)
                    for (size_t i = 0; i < str.length() - 1; i++)
                        std::cout << str[i];
        }
        else
        {
            if (!this->_point)
                std::cout << this->_double_num << ".0";
            else if (this->_point)
            {
                std::string after_point;
                int i = 0;
                while (str[i] != '.')
                    i++;
                if (str[++i] &&  str[i]!= 'f')
                    for (int j = 0; str[i] ; j++)
                        after_point[j] = str[i++];
                else
                    after_point = "0";
                if (!std::stoi(after_point))
                    std::cout << this->_double_num << ".0";
                else
                    std::cout << this->_double_num;
            }
        }
    }
}