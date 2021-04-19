#include "PhoneBook.hpp"

void Phonebook::get_first_name()
{
	std::cout<<"\e[0;35mfirst name     :\e[0;37m";
	std::cin>>first_name;
	std::cout<<"\n";
}
void Phonebook::get_last_name()
{
	std::cout<<"\e[0;35mlast name      :\e[0;37m";
	std::cin>>last_name;
	std::cout<<"\n";
}
void Phonebook::get_nickname()
{
	std::cout<<"\e[0;35mnickname       :\e[0;37m";
	std::cin>>nickname;
	std::cout<<"\n"; 
}
void Phonebook::get_login()
{
	std::cout<<"\e[0;35mlogin          :\e[0;37m";
	std::cin>>login;
	std::cout<<"\n"; 
}
void Phonebook::get_postal_address()
{
	std::cout<<"\e[0;35mpostat address :\e[0;37m";
	std::cin>>postal_address;
	std::cout<<"\n"; 
}
void Phonebook::get_email_address()
{
	std::cout<<"\e[0;35memail address  :\e[0;37m";
	std::cin>>email_address;
	std::cout<<"\n"; 
}
void Phonebook::get_phone_number()
{
	std::cout<<"\e[0;35mphone number   :\e[0;37m";
	std::cin>>phone_number;
	std::cout<<"\n"; 
}
void Phonebook::get_birthday_date()
{
	std::cout<<"\e[0;35mbirthday date  :\e[0;37m";
	std::cin>>birthday_date;
	std::cout<<"\n"; 
}
void Phonebook::get_favorite_meal()
{
	std::cout<<"\e[0;35mfavorite meal  :\e[0;37m";
	std::cin>>favorite_meal;
	std::cout<<"\n"; 
}
void Phonebook::get_underwear_color()
{
	std::cout<<"\e[0;35underwear color :\e[0;37m";
	std::cin>>underwear_color;
	std::cout<<"\n"; 
}
void Phonebook::get_darkest_secret()
{
	std::cout<<"\e[0;35darkest secret  :\e[0;37m";
	std::cin>>darkest_secret;
	std::cout<<"\n"; 
}