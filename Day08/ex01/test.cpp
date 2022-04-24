
#include <iostream>
#include <algorithm>
#include <exception>
#include <stdexcept>
#include <vector>

void	foo(void)
{
	int	i = 10;

	if (i == 10)
		throw std::exception("jdfk");
	std::cout << "..." << std::endl;
}

int	main(void)
{
	try
	{
		foo();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
