
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Span.hpp"

#define NUMS 10000

int	randomNumber(void)
{
	return ((rand() % 10000) - 5000);
}

int main()
{
	srand(time(NULL));

	std::cout << "Exemple#1: fill Span with addNumber" << std::endl;
	{
		Span 	sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << "Exemple#2: fill Span with a range of iterators" << std::endl;
	{
		Span	sp = Span(NUMS);

		std::vector<int>	vec;
		vec.reserve(NUMS);
		std::generate(vec.begin(), vec.begin() + NUMS, randomNumber);

		sp.addNumbers(vec.begin(), vec.begin() + NUMS);

		try
		{
			std::cout << sp.longestSpan() << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	return (0);
}

