#include "main.hpp"

int    contact::ft_add(int i)
{
    get_first_name();
	get_last_name();
	get_nickname();
    get_phone_number();
	get_darkest_secret();

    return i + 1;
}

int     get_index(int err,int i)
{
    int index;
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
    return index;
}

void    contact::print_all_contact_info()
{
	std::cout<<std::endl<<"\e[0;35mfirst name     :\e[0;37m";
	print_firstname(1);
	std::cout<<std::endl<<"\e[0;35mlast name      :\e[0;37m";
	print_lastname(1);
	std::cout<<std::endl<<"\e[0;35mnickname       :\e[0;37m";
	print_nickname(1);
	std::cout<<std::endl<<"\e[0;35mphone number   :\e[0;37m";
	print_phone_number();
	std::cout<<std::endl<<"\e[0;35mdarkest secret :\e[0;37m";
    print_darkest_secret();
}

int main() {
	contact book[8];
	std::string command;
	int i = 0;
	int index;
	
    title();
	while (1)
	{
		std::cout<<"\n$>";
		std::getline(std::cin, command);
		std::cout<<std::endl;
		if (command == "ADD" || command == "add")
		{
			if (i < 8)
			{
                i = book[i].ft_add(i);
				i++;
			}
			else
				std::cout<<"\e[1;31mSorry. you have alredy 8 contact !!\n\e[0;37m";
		}
		if (command == "SEARCH" || command == "search")
		{
			table_header();
            for (int j = 0; j < i; j++)
            {
		        std::cout<<"\n    "<<j<<"\e[1;31m     |\e[0;37m";
		        book[j].phonebook_print();
	        }
            std::cout<<std::endl<<"\e[1;31m--------------------------------------------\n\e[0;37m";
            index = get_index(0, i);
			if (index >= 0)
                book[index].print_all_contact_info();
		}
		if (command == "EXIT" || command == "exit")
			break;
	}
	std::cout<<"BYE!"<<std::endl;
	return 0;
}