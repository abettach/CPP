#ifndef CONVERSION_HPP__
#define CONVERSION_HPP__
# include <iostream>
#include <cstdlib>
#include <iomanip>
#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4
#define ERROR -1

class conv
{
private :
	int 		int_value;
	char		char_value;
	float 		float_value;
	double		double_value;
	bool		impossible;
	bool		non_diplayable;
	int type;
	std::string	value;
	int			precesion;
public :
	int GetType() const;
	std::string getValue() const;
	conv();
	void	setValue(std::string );
	void	setPrecision( void );
	void	parsing(std::string &Type);
	void	SetTypes( void );
	void	printTypes( void );
	void	princhar_value( void );
	void	prinint_value( void );
	void	prinfloat_value( void );
	void	prindouble_value( void );

	conv(const conv &);
	conv &operator=(const conv &);
	~conv();
};

#endif