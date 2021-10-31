#ifndef _SERIALIZATION_HPP
#define _SERIALIZATION_HPP
#include <iostream>

struct Data
{
    int x;
    char y;
    std::string str;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif 