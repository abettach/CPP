#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::tree_data =
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
........................O000O...................................";

ShrubberyCreationForm::ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
	: Form("Shrubbery Creation", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other)
	:Form("Shrubbery Creation", 145, 137)
{
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    if (this != &other)
        this->target = other.target;
    return (*this);
}

void    ShrubberyCreationForm::Action() const
{
        std::ofstream ofs;
        std::string str_file = this->target + "_shrubbery";
        ofs.open(str_file, std::ios::out);
        if (ofs.is_open())
        {
    		ofs << ShrubberyCreationForm::tree_data;
      		ofs.close();
    	}
        else
            std::cout << "Cannot Open File <" + str_file + ">, Try again!" << std::endl;
}

std::string ShrubberyCreationForm::gettarget() const
{
    return this->target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}