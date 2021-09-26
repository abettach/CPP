#include "main.hpp"

int		ft_strlen(std::string str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

void	contact::print_firstname(int index)
{
	int i;
	int len;
	i = 0;
	len = ft_strlen(first_name);
	if (index == 1)
		std::cout<< first_name;
	else
		while (i < 10)
		{
			if(first_name[i] && i < 9)
    			std::cout<<first_name[i];
			else if (i == 9 && ft_strlen(first_name) == 10)
				std::cout<<first_name[i];
			else if (!first_name[i] && ft_strlen(first_name) < 10)
				while (i++  <= 9)
					std::cout<<" ";
			i++;
		}
	if (i ==  10 && ft_strlen(first_name) >= 10 && ft_strlen(first_name) > 10)
		std::cout<< ".";
}

void	contact::print_lastname(int index)
{
	int i;
	int len;
	i = 0;
	len = ft_strlen(last_name);
	if (index == 1)
		std::cout<<last_name;
	else
		while (i < 10)
		{
			if(last_name[i] && i < 9)
    			std::cout<<last_name[i];
			else if (i == 9 && ft_strlen(last_name) == 10)
				std::cout<<last_name[i];
			else if (!last_name[i] && ft_strlen(last_name) < 10)
				while (i++ <= 9)
					std::cout<<" ";
			i++;
		}
		if (i ==  10 && ft_strlen(last_name) >= 10 && ft_strlen(last_name) > 10)
			std::cout<< ".";
}
void	contact::print_nickname(int index)
{
	int i;
	int len;
	len = ft_strlen(nickname);
	i = 0;
	if (index == 1)
		std::cout<<nickname;
	else
		while (i < 10)
		{
			if(nickname[i] && i < 9)
    			std::cout<<nickname[i];
			else if (i == 9 && ft_strlen(nickname) == 10)
				std::cout<<nickname[i];
			else if (!nickname[i] && ft_strlen(nickname) < 10)
				while (i++ <= 9)
					std::cout<<" ";
			i++;
		}
	if (i ==  10 && ft_strlen(nickname) >= 10 && ft_strlen(nickname) > 10)
		std::cout<< ".";
}

void 		contact::print_phone_number()
{
	std::cout<<phone_number;
}
void 		contact::print_darkest_secret()
{
    std::cout<<darkest_secret;
}

void        contact::phonebook_print()
{
	print_firstname(0);
	std::cout<<"\e[1;31m|\e[0;37m";
	print_lastname(0);
	std::cout<<"\e[1;31m|\e[0;37m";
	print_nickname(0);
	std::cout<<"\e[1;31m|\e[0;37m";
}