#ifndef SPAN_HPP
#define SPAN_HPP
# include <iostream>
# include <list>
# include <algorithm>
# include <vector>

class Span
{
    private :
	    unsigned int n;
	    std::vector<int> numbers;

	public:
		Span(unsigned int n = 0);
		Span(Span const & other);
		Span & operator=(Span const & other);
		~Span(void);
		class SizeFull: public std::exception
		{
			const char * what(void) const throw();
		};
		class SmallSize: public std::exception
		{
			const char * what(void) const throw();
		};
		void addNumber(int i);
		void addNumber(int i, int size);
		size_t shortestSpan(void) const;
		size_t longestSpan(void) const;
		std::vector<int> const & getInternalData(void) const;
		std::ostream & printSorted(std::ostream & os);
};

#endif