#include "span.hpp"

Span::Span() : n(0) {}

Span::Span(unsigned int n) : n(n){}

Span::Span(Span const &other)
{
	*this = other;
}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		this->n = other.n;
		this->numbers = other.numbers;
	}
	return *this;
}

const char *Span::SizeFull::what(void) const throw()
{
	return "Span is full!";
}
const char *Span::SmallSize::what(void) const throw()
{
	return "No Span!";
}

void Span::addNumber(int i)
{
	if (numbers.size() == n)
		throw SizeFull();
	else
		numbers.push_back(i);
}

void Span::addNumber(int i, int size)
{
	while (i < size)
	{
		if (numbers.size() == n)
			throw SizeFull();
		else
			numbers.push_back(i);
		i++;
	}
}

size_t Span::shortestSpan(void) const
{
	if (numbers.size() <= 1)
		throw SmallSize();
	std::vector<int> tmp(numbers);
	std::sort(tmp.begin(), tmp.end());
	return abs(tmp[0] - tmp[1]);
}

size_t Span::longestSpan(void) const
{
	if (numbers.size() <= 1)
		throw SmallSize();
	std::vector<int> tmp(numbers);
	std::sort(tmp.begin(), tmp.end());
	return (abs(tmp[0] - tmp[tmp.size() - 1]));
}

Span::~Span(void) {}