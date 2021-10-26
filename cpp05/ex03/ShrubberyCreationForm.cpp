#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Constructor Default the ShrubberyCreationForm is Called!\n";
    this->_target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
: Form("Shrubbery Creation", 145, 137)
{
    std::cout << "Constructor Parametrise the ShrubberyCreationForm is Called!\n";
    this->_target = target;
}

void    ShrubberyCreationForm::Action() const
{
        std::ofstream ofs;
        std::string str_file = this->_target + "_shrubbery";
        ofs.open(str_file.c_str(), std::ios::out);
        if (ofs.is_open())
        {
            ofs << "                                                    ___" << std::endl;
            ofs << "                                    _,-'""   """"`--." << std::endl;
            ofs << "                                ,-'          __,,-- '\'" << std::endl;
            ofs << "                            ,'    __,--""""dF      )" << std::endl;
            ofs << "                           /   .-""Hb_,--""dF     '/'" << std::endl;
            ofs << "                          ,'       _Hb ___dF""-._,-'" << std::endl;
            ofs << "                        ,'      _,-""""   ""--..__" << std::endl;
            ofs << "                        (     ,-'                  `." << std::endl;
            ofs << "                        `._,'     _   _             ;" << std::endl;
            ofs << "                        ,'     ,' `-'Hb-.___..._,-'" << std::endl;
            ofs << "                       '\'    ,'""Hb.-'HH`-.dHF""" << std::endl;
            ofs << "                            `--' ""Hb  HH  dF""" << std::endl;
            ofs << "                                  ""Hb HH dF" << std::endl;
            ofs << "                                   ""HbHHdF" << std::endl;
            ofs << "                                    |HHHF" << std::endl;
            ofs << "                                    |HHH|" << std::endl;
            ofs << "                                    |HHH|" << std ::endl;
            ofs << "                                    |HHH|" << std::endl;
            ofs << "                                    |HHH|" << std::endl;
            ofs << "                                    dHHHb" << std::endl;
            ofs << "                                  .dFd|bHb.               o" << std::endl;
            ofs << "                        o       .dHFdH|HbTHb.          o /" << std::endl;
            ofs << "                '\'  Y  | '\'__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
            ofs << "                ##########################################" << std::endl;
            ofs.close();
        }
        else
            std::cout << "\e[1;31mCannot Open File <" + str_file + ">, Try again!\e[0m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}