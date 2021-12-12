
#include <iostream>

int	main(void)
{
	int		var;
	int*	varPtr = &var;
	int&	varRef = var;

	var = 1337;
	std::cout << var << std::endl;
	std::cout << *varPtr << std::endl;
	std::cout << varRef << std::endl;
	return (0);
}
