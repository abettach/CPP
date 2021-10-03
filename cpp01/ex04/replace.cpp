#include "main.hpp"

int        ft_check_errors(std::string file_name, std::string str, std::string str_replace, bool file)
{
    if (file_name.empty() || str.empty() || str_replace.empty()) //check if the paramettres exist or not
    {
        std::cout << " Error : check your paramettres !" << std::endl;
        return 1;
    }
    if (!file) // check the file is_open
    {
        std::cout<< "Error : file doesn't exist !"<< std::endl;
        return 1;
    }
    return 0;
}

void       replace(std::string file_name, std::string s1, std::string s2)
{
    std::ifstream file(file_name.c_str());//c_string because in c++98 iftream dont take a string file name but take cont char *

    if (ft_check_errors(file_name, s1, s2, file.is_open()))
        return ;
    std::stringstream string;
    string << file.rdbuf();
    std::string string_two = string.str();
    file.close(); // close the file(filename)
    std::string new_output;
    size_t position = 0;
    while ((position = string_two.find(s1)) < SIZE_MAX) // find the first char of str in the file if the str doesnt exist then return the max of size_t
    {
        for(size_t i = 0; i < position ; i++)
             new_output.push_back(string_two[i]); // copy char by char to the new_output
        string_two.erase(0, position + s1.length()); // remove all caractere from first "file" from 0 to the position of the first char in str
        new_output.append(s2); // add the string_replace to the end of new_output
    }
    if (position == SIZE_MAX) // if str doesnt exist any more
        for (size_t i = 0; i < string_two.length() ; i++)
            new_output.push_back(string_two[i]);
    for (size_t i = 0; i < file_name.length(); i++)
        file_name[i] = toupper(file_name[i]);
    std::ofstream new_file((file_name + ".replace").c_str()); // create a new file with name file_name.replace
    new_file << new_output; // copy all things in new_output to the new file
    new_file.close(); // close the file
}