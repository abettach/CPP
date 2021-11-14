#include "easyfind.hpp"

int main()
{
	std::vector<int> container;

	container.push_back(5);
	container.push_back(10);
	container.push_back(14);
	container.push_back(0);
	container.push_back(-8);

    size_t i = 0;
    for (i = 0; i < container.size() ; i++)
    {
        if (*easyfind(container, 14) == container[i])
        {
            std::cout << "found!" << std::endl;
            break;
        }
    }
    if (i == container.size())
        std::cout << "not found!" << std::endl;

    return 0;
}