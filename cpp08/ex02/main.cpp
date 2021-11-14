#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~Test 1~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top = " << mstack.top() << ", Size = " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "Size = " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~Test 2~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::stack<int> s(mstack);
	MutantStack<int>::iterator s_it = mstack.begin();
	MutantStack<int>::iterator s_ite = mstack.end();
	while (s_it != s_ite)
	{
		std::cout << *s_it << std::endl;
		++s_it;
	}
	return 0;
}