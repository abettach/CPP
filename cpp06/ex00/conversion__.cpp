#include "conversion.hpp"

conv::conv(/* args */)
{
    this->type_value = 0;
    this->precision = 0;
}

int     ischar(std::string str)
{
    if ((str.length() == 2 || str.length() == 1) && (str[0] < '0' || str[0] > '9'))
    {
        if (str.length() == 2)
        {
            if (str[str.length() - 1] != 'f')
                return 0;
            else
                return 1;
        }
        else
            return 1;
    }
    return 0;
}

int     isint(std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        if ((str[i] < '0' || str[i] > '9'))
            return 0;
    }
    return 1;
}
int     isfloat(std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        if ((str[i] < '0' || str[i] > '9') && (str[i] != '.') && str[str.length() - 1] != 'f')
            return 0;
    }
    if(str[str.length() - 1] != 'f')
        return 0;
    return 1;
}
int     isdouble(std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        if ((str[i] < '0' || str[i] > '9') && (str[i] != '.'))
            return 0;
    }
    if(str[str.length() - 1] == 'f')
        return 0;
    return 1;
}

int    conv::getType(std::string str)
{
    if (ischar(str))
        this->type_value = CHAR_TYPE;
    else if (isint(str))
        this->type_value = INT_TYPE;
    else if (isfloat(str))
        this->type_value = FLOAT_TYPE;
    else if (isdouble(str))
        this->type_value = DOUBLE_TYPE;
    return (this->type_value);
}

void    conv::getValue(std::string str)
{
    if (this->type_value == INT_TYPE)
        this->int_value = atoi(str.c_str());
    if (this->type_value == CHAR_TYPE)
        this->char_value = str[0];
    if (this->type_value == FLOAT_TYPE)
        this->float_value = std::stof(str.c_str());
    if (this->type_value == DOUBLE_TYPE)
        this->double_value = std::stod(str.c_str());
}

void    conv::setType(std::string str)
{
    this->getValue(str);
    if (this->type_value == INT_TYPE)
    {
        this->char_value = static_cast<char>(this->int_value);
        this->float_value = static_cast<float>(this->int_value);
        this->double_value = static_cast<double>(this->int_value);
    }
    else if (this->type_value == CHAR_TYPE)
    {
        this->int_value = static_cast<int>(this->char_value);
        this->float_value = static_cast<float>(this->char_value);
        this->double_value = static_cast<double>(this->double_value);
    }
    else if (this->type_value == FLOAT_TYPE)
    {
        this->setPrecision(str);
        this->char_value = static_cast<char>(this->float_value);
        this->int_value = static_cast<int>(this->float_value);
        this->double_value = static_cast<double>(this->float_value);
    }
    else if (this->type_value == DOUBLE_TYPE)
    {
        this->setPrecision(str);
        this->char_value = static_cast<char>(this->double_value);
        this->int_value = static_cast<int>(this->double_value);
        this->float_value = static_cast<double>(this->double_value);
    }
}

void     conv::setPrecision(std::string value)
{
    if (this->type == DOUBLE_TYPE || type == FLOAT_TYPE)
	{
        if (value.find(".") < value.npos)
        {
		this->precision = value.find(".");
		this->precision = (value.length() - this->precision - 1);
		if (type == FLOAT_TYPE && !(value.find(".") == value.find("f") - 1))
			this->precision--;
		if (value.find(".") == value.length() - 1)
			this->precision++;
        }
		else
            this->precision = 1;
	}
	else
		this->precision = 1;
}
void    conv::print()
{
        std::cout << "Char : " << this->char_value << std::endl;
        std::cout << "int : " << this->int_value <<std::endl;
        std::cout << "float : " << std::fixed << std::setprecision(precision) << this->float_value << "f" << std::endl;
        std::cout << "double : " << this->double_value << std::endl;
}

conv::~conv()
{
}