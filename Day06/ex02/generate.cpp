
#include "generateIdentify.hpp"

Base*	generate(void)
{
	int		randomNum;

	srand(time(NULL));
	randomNum = rand() % 3;
	if (randomNum == 0)
	{
		std::cout << "A object created randomly" << std::endl;
		return (new A);
	}
	else if (randomNum == 1)
	{
		std::cout << "B object created randomly" << std::endl;
		return (new B);
	}
	std::cout << "C object created randomly" << std::endl;
	return (new C);
}

