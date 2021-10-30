#include "conversion.hpp"

int main(int ac, char **av)
{
    conversion conv;

    if (ac == 2)
        conv.ft_print(av[1]);

    return 0;
}