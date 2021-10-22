#include "Dog.hpp"

Dog::Dog()
{
    std::cout<< "Dog default constractor called" << std::endl;
    this->type = "Dog";
    this->dog_brain = new Brain();
}

Dog::Dog(std::string type)
{
    std::cout<< "Dog parametrise constractor called" << std::endl;
    this->dog_brain = new Brain();
    this->type = type;
}

Dog::Dog(const Dog &other)
{
    std::cout<< "Dog copy constractor called" << std::endl;
    this->type = other.getType();
    this->dog_brain = new Brain();
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this != &other)
    {
        *this->dog_brain = *other.dog_brain;
        this->type = other.type;
    }
    return *this;
}

std::string Dog::getType() const
{
    return this->type;
}

void    Dog::makeSound() const
{
    std::cout<< "Dog sound" <<std::endl;
}

void Dog::setBrain()
{
	dog_brain->setIdeas();
}

void Dog::setBrain(std::string idea)
{
	dog_brain->setIdeas(idea);
}

void Dog::getBrain()
{
	const std::string *ideas;
    ideas = this->dog_brain->getIdeas();
	for (size_t i = 0; i <= 99; i++)
		std::cout << ideas[i] << std::endl;
}

Dog::~Dog()
{
    std::cout<< "Dog Destractor fonction called" << std::endl;
    delete this->dog_brain;
}
