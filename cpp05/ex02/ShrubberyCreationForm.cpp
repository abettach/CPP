#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::tree_data = {
    "          .     .  .      +     .      .          .\n\
     .       .      .     #       .           .\n\
        .      .         ###            .      .      .\n\
      .      .   \"#:. .:##\"##:. .:#\"  .      .\n\
          .      . \"####\"###\"####\"  .\n\
       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n\
  .             \"#########\"#########\"        .        .\n\
        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n\
     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n\
                .\"##\"#####\"#####\"##\"           .      .\n\
    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n\
      .     \"#######\"##\"#####\"##\"#######\"      .     .\n\
    .    .     \"#####\"\"#######\"\"#####\"    .      .\n\
            .     \"      000      \"    .     .\n\
       .         .   .   000     .        .       .\n\
........................O000O...................................",
};

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Default Constructor Called!" << std::endl;;
    this->_target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
	: Form("Shrubbery_Creation", 145, 137)
{
    std::cout << "ShrubberyCreationForm Parametrise Constructor Called!" << std::endl;
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &sh)
	:Form("Shrubbery Creation", 145, 137)
{
	std::cout << "ShrubberyCreationForm Copy Constractor Called!" << std::endl;
    *this = sh;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &sh)
{
	std::cout << "ShrubberyCreationForm Assigniation Operator Called!" << std::endl;
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
    		ofs << ShrubberyCreationForm::tree_data;
      		ofs.close();
    	}
        else
            std::cout << "Cannot Open File <" + str_file + ">, Try again!" << std::endl;
}

std::string ShrubberyCreationForm::get_target() const
{
    return this->_target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destractor Called!" << std::endl;
}