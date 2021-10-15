#include "Character.hpp"

Character::Character()
{
    std::cout<< "Character default constractor" << std::endl;
    counter = 0;
}
Character::Character(std::string Name)
{
    std::cout<< "Character default constractor" << std::endl;
    this->Name = Name;
}

Character::Character(const Character &other)
{
    std::cout<< "Character default constractor" << std::endl;
    *this = other;
}

Character &Character::operator=(const Character &other)
{
    std::cout << "Character assigniation operator called" << std::endl;
    if (this != &other)
        for (int i = 0; i < 4; i++)
            this->inventory[i] = other.inventory[i];
    return *this;
}

Character::~Character()
{
    std::cout << "Character default destarctor" << std::endl;
}

std::string const &Character::getName() const
{
    std::cout << "Character getName" << std::endl;
    return (this->Name);
}

void    Character::equip(AMateria *m)
{
    std::cout << "Character equip function" << std::endl;
    if (counter < 4)
    {
        this->inventory[counter] = m;
        counter++;
    }else
        std::cout<< "alread we have 4 inventory sorry"<< std::endl;
}

void    Character::unequip(int idx)
{
    std::cout<< "Character unequip function" << std::endl;
    if (this->inventory[idx] && idx < counter && idx >= 0)
    {
        this->inventory[idx] = NULL;
        for (int i = idx; i < counter && this->inventory[i + 1]; i++)
            this->inventory[i] = this->inventory[i + 1];
        counter--;
    }
}

void    Character::use(int idx, ICharacter& target)
{
    std::cout << "Character use function" << std::endl;
    if (this->inventory[idx] && idx < counter && idx >= 0)
        this->inventory[idx]->use(target);
    else
        std::cout<< "invalid index" << std::endl;
}
