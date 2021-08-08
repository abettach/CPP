#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "main.hpp"

class contact {
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    //*******get contact info*********
    void		get_first_name();
    void		get_last_name();
    void		get_nickname();
    void		get_phone_number();
    void		get_darkest_secret();
    //*********************************
    //printf contact info
    void		print_firstname(int index);
    void		print_lastname(int index);
    void		print_nickname(int index);
	void 		print_phone_number();
	void 		print_darkest_secret();
    void    	phonebook_print();
    int        ft_add(int i);
    void        print_all_contact_info();
    void	    print_all(int i);
};
#endif