#include "main.hpp"

void	title()
{
	std::cout<<"\e[1;32m~Welcome To Phonbook~\n\e[0;37m"<<std::endl;
	std::cout<<"\e[1;34minsruction available:\n\n\e[1;36mADD   :\e[0;37m to add an contact\n";
	std::cout<<"\e[1;36mSEARCH:\e[0;37m to Show all available contact.\n\e[1;36mEXIT  :\e[0;37m to exit the program\n\e[0;37m";
}

void	table_header()
{
	std::cout<<"\e[1;31m--------------------------------------------\n";
	std::cout<<"\e[1;33m  index   \e[1;31m|"<<"\e[1;33mfirst name\e[1;31m|";
	std::cout<<"\e[1;33mlast name \e[1;31m|"<<"\e[1;33mnickname  \e[1;31m|"<<std::endl;
	std::cout<<"\e[1;31m--------------------------------------------\e[0;37m";
}