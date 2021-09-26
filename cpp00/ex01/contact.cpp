#include "main.hpp"

void contact::get_first_name()
{
	std::string cpy;
	int i = 0;
	int j = 0;

	std::cout<<"\e[0;35mfirst name     :\e[0;37m";
	std::getline(std::cin, cpy);
	std::cout<< "cpy" << cpy;
	while (cpy[i])
	{
		if (cpy[i] == '\t')
		{
			for (int nb = 0 ; nb < 4 ; nb++)
				first_name[j++] = ' ';
			i++;
		}
		else
			first_name[j++] = cpy[i++];
		std::cout<< "name" << first_name;
	}
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