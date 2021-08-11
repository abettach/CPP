#ifndef KAREN_CPP
#define KAREN_CPP

#include <iostream>


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
		void complain( std::string level );
};

#endif