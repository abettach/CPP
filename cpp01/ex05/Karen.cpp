#include "Karen.hpp"

/*
Setting a member function pointer to point to a member function:
pointer_name = &class_name::member_function_name;
*/


Karen::Karen(void)
{
	this->pointer[0] = &Karen::debug;
	this->pointer[1] = &Karen::info;
	this->pointer[2] = &Karen::warning;
	this->pointer[3] = &Karen::error;
}

Karen::~Karen(void)
{
    return;
}

void    Karen::debug(void)
{
    std::cout<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it";
    std::cout<<std::endl;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!";
    std::cout<<std::endl;
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.";
    std::cout << std::endl;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now.";
    std::cout << std::endl;
}

void    Karen::complain(std::string level)
{
	std::string KAREN_MESSAGE[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (std::size_t i = 0; i < 4; i++)
		if (level.compare(KAREN_MESSAGE[i]) == 0) 
			(this->*(pointer[i]))();
	return;
}