#include "main.hpp"

void       replace(std::string file_name, std::string str, std::string str_rpalce)
{
    std::ifstream file(file_name.c_str());

    if (!file.is_open())
        std::cout<< "file doesnt exist !"<<std::endl;
    
    
}