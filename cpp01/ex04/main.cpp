#include "main.hpp"

int     main(int ac, char **av)
{
    if (ac == 4)
        replace(av[1],av[2],av[3]);
    else
        std::cout << " Error : check the number of the paramettres !" << std::endl;
    return 0;
}