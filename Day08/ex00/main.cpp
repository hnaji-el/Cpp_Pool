
#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>

int	main(void)
{
	int				ret;

	std::cout << "Exemple1: standard container vector" << std::endl;
	{
		std::vector<int>	vec(10);
		std::vector<int>::size_type	size = vec.size();

		for (size_t i = 0; i < size; i++) {
			vec.at(i) = 10 + i;
		}

		ret = easyfind< std::vector<int> >(vec, 10);
		if (ret != -1)
			std::cout << "Element found in lst" << std::endl;
		else
			std::cout << "Element not found in lst" << std::endl;
	}

	std::cout << "Exemple2: standard conatainer deque" << std::endl;
	{
		std::deque<int>		deq(10);
		std::deque<int>::size_type	size = deq.size();

		for (size_t i = 0; i < size; i++) {
			deq.at(i) = 10 + i;
		}

		ret = easyfind< std::deque<int> >(deq, 10);
		if (ret != -1)
			std::cout << "Element found in lst" << std::endl;
		else
			std::cout << "Element not found in lst" << std::endl;
	}

	std::cout << "Exemple3: standard container list" << std::endl;
	{
		std::list<int>	lst;

		lst.push_front(13);
		lst.push_front(12);
		lst.push_front(11);
		lst.push_front(10);

		ret = easyfind< std::list<int> >(lst, 10);
		if (ret != -1)
			std::cout << "Element found in lst" << std::endl;
		else
			std::cout << "Element not found in lst" << std::endl;
	}

	std::cout << "Exemple4: standard container stack" << std::endl;
	{
		std::stack<int>		myStack;

		for (size_t i = 0; i < 4; i++)
		{
			myStack.push(i + 10);
		}

		ret = easyfind< std::stack<int> >(myStack, 11);
		if (ret != -1)
			std::cout << "Element found in lst" << std::endl;
		else
			std::cout << "Element not found in lst" << std::endl;
	}

	std::cout << "Exemple5: standard container queue" << std::endl; 
	{
		std::queue<int>		myQueue;

		for (size_t i = 0; i < 4; i++)
		{
			myQueue.push(i + 10);
		}

		ret = easyfind< std::queue<int> >(myQueue, 11);
		if (ret != -1)
			std::cout << "Element found in lst" << std::endl;
		else
			std::cout << "Element not found in lst" << std::endl;
	}

	std::cout << "Exemple6: standard container priority_queue" << std::endl;
	{
		std::priority_queue<int>	myPrQueue;

		for (size_t i = 0; i < 4; i++)
		{
			myPrQueue.push(i + 10);
		}

		ret = easyfind< std::priority_queue<int> >(myPrQueue, 11);
		if (ret != -1)
			std::cout << "Element found in lst" << std::endl;
		else
			std::cout << "Element not found in lst" << std::endl;
	}

	return (0);
}

