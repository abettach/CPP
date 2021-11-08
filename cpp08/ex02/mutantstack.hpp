#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP
#include <iostream>
#include <stack>
#include <vector>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack(void) : std::stack<T>() {}
	MutantStack(MutantStack const &other) { *this = other;}
	MutantStack &operator=(MutantStack const &other)
	{
		if (this != &other)
			this->c = other.c;
		return (*this);
	}
	iterator begin(void) {return (this->c.begin());}
	iterator end(void) {return this->c.end();}
	~MutantStack(void) {}
};

#endif
