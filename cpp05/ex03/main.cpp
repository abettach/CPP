#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Form* rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if(rrf)
        rrf->Action();
}