#include "PhoneBook.hpp"

void	Phonebook::print_firstname(int index)
{
	int i;
	int len;
	i = 0;
	len = ft_strlen(first_name);
	while (i < 10 || index == 1)
	{
		if(first_name[i])
    		std::cout<<first_name[i];
		else
			std::cout<<" ";
		i++;
		if (i == 9 && len > 10 && index == 0)
		{
			std::cout<<".";
			i++;
		}
	}
}
void	Phonebook::print_lastname()
{
	int i;
	int len;
	i = 0;
	len = ft_strlen(last_name);
	while (i < 10)
	{
		if(last_name[i])
    		std::cout<<last_name[i];
		else
			std::cout<<" ";
		i++;
		if (i == 9 && len > 10)
		{
			std::cout<<".";
			i++;
		}
	}
}
void	Phonebook::print_nickname()
{
	int i;
	int len;
	len = ft_strlen(nickname);
	i = 0;
	while (i < 10)
	{
		if(nickname[i])
    		std::cout<<nickname[i];
		else
			std::cout<<" ";
		i++;
		if (i == 9 && len > 10)
		{
			std::cout<<".";
			i++;
		}
	}
}
void	Phonebook::print_login()
{
	int i;
	int len;
	len = ft_strlen(login);
	i = 0;
	while (i < 10)
	{
		if(login[i])
    		std::cout<<login[i];
		else
			std::cout<<" ";
		i++;
		if (i == 9 && len > 10)
		{
			std::cout<<".";
			i++;
		}
	}
}
void 		Phonebook::print_postal_address()
{
	int i;
	int len;
	len = ft_strlen(postal_address);
	i = 0;
	while (i < 10)
	{
		if(postal_address[i])
    		std::cout<<postal_address[i];
		else
			std::cout<<" ";
		i++;
		if (i == 9 && len > 10)
		{
			std::cout<<".";
			i++;
		}
	}
}
void 		Phonebook::print_email_address()
{
	int i;
	int len;
	len = ft_strlen(email_address);
	i = 0;
	while (i < 10)
	{
		if(email_address[i])
    		std::cout<<email_address[i];
		else
			std::cout<<" ";
		i++;
		if (i == 9 && len > 10)
		{
			std::cout<<".";
			i++;
		}
	}
}
void 		Phonebook::print_phone_number()
{
	int i;
	int len;
	len = ft_strlen(phone_number);
	i = 0;
	while (i < 10)
	{
		if(phone_number[i])
    		std::cout<<phone_number[i];
		else
			std::cout<<" ";
		i++;
		if (i == 9 && len > 10)
		{
			std::cout<<".";
			i++;
		}
	}
}
void 		Phonebook::print_birthday_date()
{
	int i;
	int len;
	len = ft_strlen(birthday_date);
	i = 0;
	while (i < 10)
	{
		if(birthday_date[i])
    		std::cout<<birthday_date[i];
		else
			std::cout<<" ";
		i++;
		if (i == 9 && len > 10)
		{
			std::cout<<".";
			i++;
		}
	}
}
void 		Phonebook::print_favorite_meal()
{
	int i;
	int len;
	len = ft_strlen(favorite_meal);
	i = 0;
	while (i < 10)
	{
		if(favorite_meal[i])
    		std::cout<<favorite_meal[i];
		else
			std::cout<<" ";
		i++;
		if (i == 9 && len > 10)
		{
			std::cout<<".";
			i++;
		}
	}
}
void 		Phonebook::print_underwear_color()
{
	int i;
	int len;
	len = ft_strlen(underwear_color);
	i = 0;
	while (i < 10)
	{
		if(underwear_color[i])
    		std::cout<<underwear_color[i];
		else
			std::cout<<" ";
		i++;
		if (i == 9 && len > 10)
		{
			std::cout<<".";
			i++;
		}
	}
}
void 		Phonebook::print_darkest_secret()
{
	int i;
	int len;
	len = ft_strlen(darkest_secret);
	i = 0;
	while (i < 10)
	{
		if(darkest_secret[i])
    		std::cout<<darkest_secret[i];
		else
			std::cout<<" ";
		i++;
		if (i == 9 && len > 10)
		{
			std::cout<<".";
			i++;
		}
	}
}

void        Phonebook::get_print()
{
	int i =0;
	int index = 1;
	print_firstname(0);
	std::cout<<"\e[1;31m|\e[0;37m";
	print_lastname();
	std::cout<<"\e[1;31m|\e[0;37m";
	print_nickname();
	std::cout<<"\e[1;31m|\e[0;37m";
}