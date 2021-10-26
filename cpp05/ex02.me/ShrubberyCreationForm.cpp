#include "ShrubberyCreationForm.hpp"

std::string ShrubberyCreationForm::tree_data =
"          .     .  .     +     .      .          .\n\
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
       .         .    .   000     .        .       .\n\
.........................O000O........................ ...... ..."
;

ShrubberyCreationForm::ShrubberyCreationForm(/* args */)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
 : Form("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other)
 : Form("ShrubberyCreationForm", 145, 137)
{
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    if (this != &other)
        this->target = other.target;
    return *this;
}

void    ShrubberyCreationForm::Action() const
{
    std::ofstream ofs;
    std::string file = this->target + "_shrubbery";
    ofs.open(file, std::ios::out);
    if (ofs.is_open())
    {
        ofs << this->tree_data;
        ofs.close();
    }
    else
        std::cout << "Cannot Open the file named "<< file <<std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}