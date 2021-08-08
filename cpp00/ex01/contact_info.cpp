#include "main.hpp"

void contact::get_first_name()
{
	std::cout<<"\e[0;35mfirst name     :\e[0;37m";
	std::getline(std::cin, first_name);
	std::cout<<std::endl;
}
void contact::get_last_name()
{
	std::cout<<"\e[0;35mlast name      :\e[0;37m";
	std::getline(std::cin, last_name);
	std::cout<<std::endl;
}
void contact::get_nickname()
{
	std::cout<<"\e[0;35mnickname       :\e[0;37m";
	std::getline(std::cin, nickname);
	std::cout<<std::endl; 
}

void contact::get_phone_number()
{
	std::cout<<"\e[0;35mphone number   :\e[0;37m";
	std::getline(std::cin, phone_number);
	std::cout<<"\n"; 
}

void contact::get_darkest_secret()
{
	std::cout<<"\e[0;35mdarkest secret  :\e[0;37m";
	std::getline(std::cin, darkest_secret);
	std::cout<<std::endl; 
}