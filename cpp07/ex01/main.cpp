#include "iter.hpp"

template<typename T>
void    ft_print(T x)
{
    std::cout << x << std::endl;
}

int	main()
{
    int size = 10;
	int arr[size];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
        arr[i] = rand();
	iter(arr, size, ft_print);
    return 0;
}