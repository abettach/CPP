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

void randomChump( std::string name );
Zombie* newZombie( std::string name );
#endif