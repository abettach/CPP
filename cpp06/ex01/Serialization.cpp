#include "Serialization.hpp"

/*
    reinterpret_cast is the most dangerous cast, and should be used very sparingly.
    It turns one type directly into another — such as casting the value from one pointer to another
    or storing a pointer in an int, or all sorts of other nasty things.
    the only guarantee you get with reinterpret_cast is that normally if you cast the result back to the original type,
    you will get the exact same value (but not if the intermediate type is smaller than the original type).
*/

uintptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}