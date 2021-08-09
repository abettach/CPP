#ifndef _ZOMBIE_
#define _ZOMBIE_

#include <iostream>

class Zombie
{
    private:
    std::string name;

    public:
    Zombie(std::string);
    ~Zombie(void);
    void    announce(void);

};

Zombie* zombieHorde( int N, std::string name );

#endif