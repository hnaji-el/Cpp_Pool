
#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int>	mstack;

	std::cout << mstack.size() << std::endl;
	if (mstack.empty() == true)
		std::cout << "is empty" << std::endl;
	else
		std::cout << "is Not empty" << std::endl;

	return (0);
}
