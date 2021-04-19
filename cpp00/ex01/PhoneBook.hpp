#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>

int		ft_strlen(std::string str);

class Phonebook {
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_address;
    std::string email_address;
    std::string phone_number;
    std::string birthday_date;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;
public:
    //*******get contact info*********
    void		get_first_name();
    void		get_last_name();
    void		get_nickname();
    void		get_login();
    void		get_postal_address();
    void		get_email_address();
    void		get_phone_number();
    void		get_birthday_date();
    void		get_favorite_meal();
    void		get_underwear_color();
    void		get_darkest_secret();
    //*********************************
    //printf contact info
    void		print_firstname();
    void		print_lastname();
    void		print_nickname();
	void 		print_login();
	void 		print_postal_address();
	void 		print_email_address();
	void 		print_phone_number();
	void 		print_birthday_date();
	void 		print_favorite_meal();
	void 		print_underwear_color();
	void 		print_darkest_secret();
    void    	get_print();

};
#endif