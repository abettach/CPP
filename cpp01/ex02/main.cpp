#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "address in memory of the string   : "<< &string <<std::endl;
	std::cout << "address in memory of the stringPTR: "<< stringPTR <<std::endl;
	std::cout << "address in memory of the stringREF: "<< &stringREF <<std::endl<<std::endl;


	std::cout << "stringPTR points to: " << *stringPTR << std::endl;
	std::cout << "stringREF points to: " << stringREF << std::endl;
}