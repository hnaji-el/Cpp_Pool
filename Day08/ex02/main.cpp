
#include "MutantStack.hpp"

int	main(void)
{
	std::cout << "Exemple#1: MutantStack" << std::endl;
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;
		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);

		if (!mstack.empty())
			std::cout << "mstack is Not empty" << std::endl;
		else
			std::cout << "mstack is empty" << std::endl;

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::cout << "Exemple#2: std::list" << std::endl;
	{
		std::list<int>	lst;

		lst.push_back(5);
		lst.push_back(17);

		std::cout << lst.back() << std::endl;
		lst.pop_back();

		std::cout << lst.size() << std::endl;

		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);

		if (!lst.empty())
			std::cout << "lst is Not empty" << std::endl;
		else
			std::cout << "lst is empty" << std::endl;

		std::list<int>::iterator it = lst.begin();
		std::list<int>::iterator ite = lst.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	return (0);
}

