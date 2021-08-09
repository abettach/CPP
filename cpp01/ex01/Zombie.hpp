#ifndef _ZOMBIE_
#define _ZOMBIE_

#include <iostream>

class Zombie
{
    private:
    std::string name;

    public:
    Zombie(void);
    ~Zombie(void);
    void    announce(void);
    void    set_zombie_name(std::string name);

};

Zombie* zombieHorde( int N, std::string name );

#endif