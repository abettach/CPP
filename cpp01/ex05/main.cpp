#include "Karen.hpp"

int     message_error(std::string str)
{
    if (str.compare("DEBUG") && str.compare("INFO") && str.compare("WARNING") && str.compare("ERROR"))
    {
        std::cout << "entere a valide paramettre :\n USAGE : \n-./karen DEBUG OR INFO OR WARNING OR ERROR\n";
        return 0;
    }
    return 1;
}
int     main(int ac, char **av)
{
    Karen karen;

    if (ac == 2)
    {
        for (int j = 0; av[1][j] ; j++)
            if (av[1][j] >= 'a' && av[1][j] <= 'z')
                av[1][j] = toupper(av[1][j]);
        if (message_error(av[1]))   
            karen.complain(av[1]);
    }
    return 0;
}