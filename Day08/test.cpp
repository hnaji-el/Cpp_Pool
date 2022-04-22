
#include <iostream>
#include <list>

template<typename T>
T::iterator	easyfind(T const & containerOfInt, int const val)
{
	T::iterator	first;
	T::iterator	last = containerOfInt.end();

	for (first = containerOfInt.begin(); first != last; first++)
	{
		if (*first == val)
			return (first);
	}
	return (last);
}

int	main(void)
{
	std::list<int>	lst;

	lst.push_front(10);
	lst.push_front(12);
	lst.push_front(14);

	std::list<int>::iterator	it;

	it = easyfind< std::list<int> >(lst, 12);

	for (; it != lst.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	return (0);
}
