#ifndef MATERIALSOURCE_HPP
#define MATERIALSOURCE_HPP
#include "IMateriaSource.hpp"
#include <iostream>
class MateriaSource : public IMateriaSource
{
	private:
		AMateria *source[4];
		int counter;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		MateriaSource &operator=(const MateriaSource &other);
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif