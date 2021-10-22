#include "Character.hpp"

Character::Character()
{
   //std::cout<< "Character default constractor called" << std::endl;
    this->counter = 0;
}
Character::Character(std::string Name)
{
   //std::cout<< "Character default constractor called" << std::endl;
    this->Name = Name;
}

Character::Character(const Character &other)
{
   //std::cout<< "Character default constractor called" << std::endl;
    *this = other;
}

Character &Character::operator=(const Character &other)
{
   //std::cout << "Character assigniation operator called" << std::endl;
    if (this != &other)
    {
        this->Name = other.Name;
        this->counter = other.counter;
        for (int i = 0; i < this->counter ; i++)
            this->inventory[i] = other.inventory[i]->clone();
    }
    return *this;
}

std::string const &Character::getName() const
{
   //std::cout << "Character getName" << std::endl;
    return (this->Name);
}

void    Character::equip(AMateria *m)
{
   //std::cout << "Character equip function" << std::endl;
    if (counter < 4)
    {
        this->inventory[counter] = m;
        counter++;
    }
    else
       std::cout<< "full inventory"<< std::endl;
}

void    Character::unequip(int idx)
{
   //std::cout<< "Character unequip function" << std::endl;
    if (idx >= 0 && idx < counter)
    {
        this->inventory[idx] = NULL;
        for (int i = idx; i < counter && this->inventory[i + 1]; i++)
            this->inventory[i] = this->inventory[i + 1];
        counter--;
    }
}

void    Character::use(int idx, ICharacter& target)
{
   //std::cout << "Character use function" << std::endl;
    if (idx < counter && idx >= 0)
        this->inventory[idx]->use(target);
    else
       std::cout<< "Invalid index" << std::endl;
}

Character::~Character()
{
   //std::cout << "Character default destarctor" << std::endl;
}