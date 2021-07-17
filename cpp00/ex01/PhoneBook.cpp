#include "PhoneBook.hpp"

// #define BBLK "\e[1;30m"
// #define BRED "\e[1;31m"
// #define BGRN "\e[1;32m"
// #define BYEL "\e[1;33m"
// #define BBLU "\e[1;34m"
// #define BMAG "\e[1;35m"
// #define BCYN "\e[1;36m"
// #define BWHT "\e[1;37m"

// #define BLK "\e[0;30m"
// #define RED "\e[0;31m"
// #define GRN "\e[0;32m"
// #define YEL "\e[0;33m"
// #define BLU "\e[0;34m"
// #define MAG "\e[0;35m"
// #define CYN "\e[0;36m"
// #define WHT "\e[0;37m"

int		ft_strlen(std::string str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

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

int main() {
	Phonebook book[8];
	int i = 0;
	int index;
	int j = 0;
	char command[15];
	title();
	while (1)
	{
		std::cout<<"\ncommand :";
		std::cin>>command;
		std::cout<<std::endl;
		if (strcmp(command, "ADD") == 0 || strcmp(command, "add") == 0)
		{
			if (i < 8)
			{
				book[i].get_first_name();
				book[i].get_last_name();
				book[i].get_nickname();
				book[i].get_login();
				book[i].get_postal_address();
				book[i].get_email_address();
				book[i].get_phone_number();
				book[i].get_birthday_date();
				book[i].get_favorite_meal();
				book[i].get_underwear_color();
				book[i].get_darkest_secret();
				i++;
			}
			else
				std::cout<<"\e[1;31mSorry. you have alredy 8 contact !!\n\e[0;37m";
		}
		int err = 1;
		if (strcmp(command, "SEARCH") == 0 || strcmp(command, "search") == 0)
		{
			table_header();
			j = 0;
			while (j < i)
			{
				std::cout<<"\n    "<<j<<"\e[1;31m     |\e[0;37m";
				book[j].get_print();
				j++;
			}
			std::cout<<std::endl<<"\e[1;31m--------------------------------------------\n\e[0;37m";
			while (err != 0)
			{
				err = 0;
				std::cout<<std::endl<<"- put index betwen 0 and "<<i-1<<" :";
				std::cin>>index;
				if (index > i || index < 0)
				{
					err = 1;
					std::cout<<"Error your index is invalide pleas put a valid one"<<std::endl;
				}
			}
			if (index >= 0)
			{
				std::cout<<std::endl<<"\e[0;35mfirst name     :\e[0;37m";
				book[index].print_firstname(1);
				std::cout<<std::endl<<"\e[0;35mlast name      :\e[0;37m";
				book[index].print_lastname();
				std::cout<<std::endl<<"\e[0;35mnickname       :\e[0;37m";
				book[index].print_nickname();
				std::cout<<std::endl<<"\e[0;35mlogin          :\e[0;37m";
				book[index].print_login();
				std::cout<<std::endl<<"\e[0;35mpostat address :\e[0;37m";
				book[index].print_postal_address();
				std::cout<<std::endl<<"\e[0;35memail address  :\e[0;37m";
				book[index].print_email_address();
				std::cout<<std::endl<<"\e[0;35mphone number   :\e[0;37m";
				book[index].print_phone_number();
				std::cout<<std::endl<<"\e[0;35mbirthday date  :\e[0;37m";
				book[index].print_birthday_date();
				std::cout<<std::endl<<"\e[0;35mfavorite meal  :\e[0;37m";
				book[index].print_favorite_meal();
				std::cout<<std::endl<<"\e[0;35munderwear color:\e[0;37m";
				book[index].print_underwear_color();
				std::cout<<std::endl<<"\e[0;35mdarkest secret :\e[0;37m";
				book[index].print_darkest_secret();
			}
		}
		if (strcmp(command, "EXIT") == 0 || strcmp(command, "exit") == 0)
		{
			std::cout<<"BYE!"<<std::endl;
			break;
		}
	}
	return 0;
}