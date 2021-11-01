#ifndef __CONVERSION_HPP__
# define __CONVERSION_HPP__

# include <iostream>
# include <cstdlib>
#include <iomanip>


class Type
{
private :
	int 		int_value;
	char		char_value;
	float 		float_value;
	double		double_value;
	bool		impossible;
	bool		non_displayable;
	std::string type;
	std::string	value;
	int			precesion;
public :
	std::string GetType() const;
	std::string getValue() const;
	Type();
	void	setValue(std::string );
	void	setPrecision( void );
	void	parsing(std::string &Type);
	void	SetTypes( void );
	void	printTypes( void )	;
	void	princhar_value( void )		;
	void	prinint_value( void )		;
	void	prinfloat_value( void )	;
	void	prindouble_value( void )	;

	Type(const Type &);
	Type &operator=(const Type &);
	~Type();
};

#endif