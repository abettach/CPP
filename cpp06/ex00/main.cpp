#include "conversion.hpp"

bool    ft_check_multi_char(std::string str)
{
    int counter = 0;

    if (str != "nan" && str != "nanf" && str != "-inff"
        && str != "+inff" && str != "-inf" && str != "+inf")
    {
        for (size_t i = 0; i < str.length() ; i++)
        {
            if ((str[i] < '0' || str[i] > '9'))
                counter++;
        }
        if (counter == 1)
            return true;
        if (counter > 2)
            return (false);
        if (counter == 2)
        {
            if (str[str.length() - 1] != 'f')
                return false;
        }
    }
    return true;
}

int main(int ac, char **av)
{
    conversion conv;

    if (ac == 2 && ft_check_multi_char(av[1]))
    {
        conv.ft_print(av[1]);
    }
    else
        std::cout << "Error: invalide arguments" << std::endl;

    return 0;
}