#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCrationForm Default Constractor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
        : Form("Shrubbery_Creation", 145, 137)
{
    std::cout << "Constructor Parametrise the ShrubberyCreationForm is Called!\n";
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) :
    Form("Shrubbery_creation", 145, 137)
{
    std::cout << "ShrubberyCrationForm copy Constractor called" << std::endl;
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &sh)
{
    if (this != &sh)
        this->_target = sh._target;
    return (*this);
}

void    ShrubberyCreationForm::Action() const
{
        std::ofstream ofs;
        std::string str_file = this->_target + "_shrubbery";
        ofs.open(str_file, std::ios::out);
        if (ofs.is_open())
        {
            std::cout <<"          &&& &&  & &&"        <<std::endl;
            std::cout <<"      && &\/&\|& ()|/ @, &&"   <<std::endl;
            std::cout <<"      &\/(/&/&||/& /_/)_&/_&"  <<std::endl;
            std::cout <<"   &() &\/&|()|/&\/ \'%\" & ()"<<std::endl;
            std::cout <<"  &_\_&&_\ |& |&&/&__%_/_& &&" <<std::endl;
            std::cout <<"&&   && & &| &| /& & % ()& /&&" <<std::endl;
            std::cout <<" ()&_---()&\&\|&&-&&--%---()~" <<std::endl;
            std::cout <<"     &&     \|||"              <<std::endl;
            std::cout <<"             |||"              <<std::endl;
            std::cout <<"             |||"              <<std::endl;
            std::cout <<"             |||"              <<std::endl;
            std::cout <<"       , -=-~  .-^- _ "        <<std::endl;
            ofs.close();
        }
        else
            std::cout << "\e[1;31mCannot Open File <" + str_file + ">, Try again!\e[0m" << std::endl;
}

std::string ShrubberyCreationForm::get_target() const
{
    return this->_target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destractor Called" << std::endl;
}