#include <iostream>
#include <cmath>
class test
{
    private:
        int value;
    public:
        int    getvalue(void);
        void    setvalue(int value);
        test& operator=(test &rhs);
        test();
};

std::ostream &operator<<(std::ostream &out, test const &rhs);

std::ostream   &operator<<(std::ostream &out, test const &rhs)
{
    std::cout<< "Assignation operator called" << std::endl;
    //return (std::ostrea;m)0
}

test::test() : value(0) {};

test& test::operator=(test &rhs)
{
    std::cout << this <<std::endl << &rhs<< std::endl;
    if (this != &rhs)
        this->value = rhs.getvalue();
    return *this;
}

int    test::getvalue(void)
{
    return this->value;
}

void    test::setvalue(int value)
{
    this->value = value;
}

int     main(void)
{
    test l;
    test b;
    float c(10.6);

    int nbr = 5;
    int value = 8;

    nbr << value;
    b = l;
    std::cout << &b <<std::endl << &l << std::endl;

    std::cout<< b.getvalue()<< std::endl;
    std::cout<< l.getvalue()<< std::endl;
    std::cout<< roundf(c) << std::endl;
    std::cout<< roundf(nbr << value);
    return 0;
}