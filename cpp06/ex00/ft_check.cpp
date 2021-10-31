#include "conversion.hpp"

bool conversion::isdigit(std::string str)
{
    int num_point = 0;
    int is_char = 0;
    if (str == "nan" || str == "nanf" || str == "-inff"
        || str == "+inff" || str == "-inf" || str == "+inf")
            return true;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == '.')
            num_point++;
        if ((str[i] < 32 || str[i] > 127) || num_point > 1)
            return false;
    }
    for (size_t i = 0; i < str.length(); i++)
    {
        if (((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
            is_char++;
    }
    if ((is_char > 2 || (is_char == 2 && str[str.length() - 1] != 'f')))
        return false;
    return true;
}

bool    conversion::ischar(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
        {
            if (str[i] == 'f' && i == str.length() - 1 && str.length() > 2)
                continue;
            return true;
        }
    }
    return false;
}