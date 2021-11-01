# include "conversion.hpp"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        conv c;

        std::cout << c.getType(av[1]) << std::endl;
        c.setType(av[1]);
        c.print();
        // if (!c.getType(av[1]))
        // {
        //     std::cout << "Invalide type" << std::endl;
        //     return 0;
        // }
        // else
        // {
        //     c.setTypes(av[1]);
        //     c.printTypes();
        // }
    }
    else
        std::cout << "ERROR : Bada arguments !!" << std::endl;
	return (0);
}