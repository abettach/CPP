#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template<typename T>
T   *iter(T *arr, int size, void fun(T))
{
    for (int i = 0; i < size; i++)
		fun (arr[i]);
    return arr;
}


#endif