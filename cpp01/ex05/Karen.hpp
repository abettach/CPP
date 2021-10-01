#ifndef KAREN_CPP
#define KAREN_CPP

#include <iostream>

/*Declaring a pointer to a member function:
return_type (class_name::*pointer_name) (parameter types)
*/
class Karen
{
	private:
    	void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Karen();
		~Karen();
		void	(Karen::*pointer[4])(void);
		void complain(std::string level);
};

#endif