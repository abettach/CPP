#ifndef ICE_HPP_
#define ICE_HPP_
#include "AMateria.hpp"
class Ice : public AMateria
{
	public :
		Ice();
		Ice(const Ice &other);
		~Ice();
		Ice &operator=(const Ice &other);
		void use(ICharacter& target);
		std::string const & getType() const; //Returns the materia type
		AMateria* clone() const;
};

#endif