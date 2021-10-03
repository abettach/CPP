#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "normal string call       :  " << &string << std::endl;
	std::cout << "pointer string call      :  " << stringPTR << std::endl;
	std::cout << "reference string call    :  " << &stringREF << std::endl;

	std::cout << "============================================ " << std::endl;

	std::cout << "normal string call       :  " << string << std::endl;
	std::cout << "pointer string call      :  " << *stringPTR << std::endl;
	std::cout << "reference string call    :  " << stringREF << std::endl;
}