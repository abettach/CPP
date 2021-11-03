#include <iostream>
#include <vector>

int     main()
{
    std::vector<int>v(5);

    v.push_back(5);
    v.pop_back();
    for (size_t i = 0; i < v.size() ; i++)
    {
        std::cout << v[i] << std::endl;
    }   
}