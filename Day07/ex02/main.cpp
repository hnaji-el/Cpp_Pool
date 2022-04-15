
#include "Array.hpp"

void	testArrayWithSimpleType(void)
{
	Array<int>	arrInt(4);

	for (size_t i = 0; i < 4; i++) {
		arrInt[i] = i + 10;
	}

	for (size_t i = 0; i < 4; i++) {
		std::cout << arrInt[i] << std::endl;
	}

	{
		Array<int>	temp1 = arrInt;
		Array<int>	temp2; 

		temp2 = temp1;
		for (size_t i = 0; i < 4; i++) {
			std::cout << temp1[i] << ", " << temp2[i] << std::endl;
		}
	}

	try
	{
		arrInt[4] = 4;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: trying to access an array "
					 "element using an out of bounds index" << std::endl;
	}
}

void	testArrayWithComplexType(void)
{
	Array<std::string>	arrString(2);

	arrString[0] = "Tesla";
	arrString[1] = "Newton"; 

	for (size_t i = 0; i < 2; i++) {
		std::cout << arrString[i] << std::endl;
	}

	{
		Array<std::string>	temp1 = arrString;
		Array<std::string>	temp2; 

		temp2 = temp1;
		for (size_t i = 0; i < 2; i++) {
			std::cout << temp1[i] << ", " << temp2[i] << std::endl;
		}
	}

	try
	{
		arrString[-1] = "Maxwell";
	}
	catch (std::exception& e)
	{
		std::cout << "Error: trying to access an array "
					 "element using an out of bounds index" << std::endl;
	}
}

int	main(void)
{
	std::cout << "Exemple1: Test Array with a SIMPLE TYPE (int)" << std::endl;
	testArrayWithSimpleType();

	std::cout << std::endl;

	std::cout << "Exemple2: Test Array with a COMPLEXE TYPE (std::string)" << std::endl;
	testArrayWithComplexType();

	return (0);
}

