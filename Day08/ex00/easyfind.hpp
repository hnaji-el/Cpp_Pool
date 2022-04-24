
#ifndef EASYFIND_H
# define EASYFIND_H

# include <algorithm>
# include <stack>
# include <queue>

template<typename T>
int	easyfind(T const & intContainer, int const val)
{
	if (std::find(intContainer.begin(), intContainer.end(), val) != intContainer.end())
		return (0);
	return (-1);
}

template<>
int	easyfind< std::stack<int> >(std::stack<int> const & myStack, int const val)
{
	std::stack<int>		copy = myStack;

	while (!copy.empty())
	{
		if (copy.top() == val)
			return (0);
		copy.pop();
	}
	return (-1);
}

template<>
int	easyfind< std::queue<int> >(std::queue<int> const & myQueue, int const val)
{
	std::queue<int>		copy = myQueue;

	while (!copy.empty())
	{
		if (copy.front() == val)
			return (0);
		copy.pop();
	}
	return (-1);
}

typedef std::priority_queue<int>	PriorityQueue;

template<>
int	easyfind< PriorityQueue >(PriorityQueue const & myPrQueue, int const val)
{
	PriorityQueue	copy = myPrQueue;

	while (!copy.empty())
	{
		if (copy.top() == val)
			return (0);
		copy.pop();
	}
	return (-1);
}

#endif

