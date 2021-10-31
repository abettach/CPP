#include "Serialization.hpp"

int main()
{
    Data *ptr_T1 = new Data();
    uintptr_t  raw;

    ptr_T1->x = 1337;
    ptr_T1->y = 'Z';
    ptr_T1->str = "Hello";
    
    std::cout << "~~~~~~~~~~~~~~~Serialize~~~~~~~~~~~~~~~~~~~~~~~~" <<std::endl;
    std::cout << "x :" << ptr_T1->x <<std::endl;
    std::cout << "y :" << ptr_T1->y <<std::endl;
    std::cout << "str :" << ptr_T1->str <<std::endl;
    raw = serialize(ptr_T1);


    Data *ptr_T2;
    std::cout << "~~~~~~~~~~~~~~~DeSerialize~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    ptr_T2 = deserialize(raw);
    std::cout << "x :" << ptr_T2->x <<std::endl;
    std::cout << "y :" << ptr_T2->y <<std::endl;
    std::cout << "str :" << ptr_T2->str <<std::endl;
    return 0;
}