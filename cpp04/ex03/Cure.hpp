#ifndef CURE_HPP_
#define CURE_HPP_
#include "AMateria.hpp"
#include "ICharacter.hpp"

class ICharacter;
class AMateria;
class Cure : public AMateria
{
	public :
		Cure();
		Cure(const Cure &other);
		Cure &operator=(const Cure &other);
		void use(ICharacter& target);
		std::string const & getType() const; //Returns the materia type
		AMateria* clone() const;
};

#endif