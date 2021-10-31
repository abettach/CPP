#include "Array.hpp"
#define SIZE 5

int main()
{
	Array<int> arr(SIZE);
	int *cpy = new int[SIZE];

	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		const int value = rand();
		arr[i] = value;
		cpy[i] = value;
	}

	for (int i = 0; i < SIZE; i++)
	{
		if (cpy[i] != arr[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	try
	{
		arr[-1] = rand();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Original : {";
	for (int i = 0; i   < SIZE; i++)
	{
		arr[i] = rand();
		std::cout << arr[i];
		if (i < SIZE - 1)
			std::cout << ", ";
	}
	std::cout << "}" << std::endl;
	Array<int> arr_cpy(arr);
	std::cout << "Copy     : {";
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr_cpy[i];
		if (i < SIZE - 1)
			std::cout << ", ";
	}
	std::cout << "}" << std::endl;
	delete[] cpy;
	return 0;
}