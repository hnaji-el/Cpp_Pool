
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "------------  Virtual Destructor  -------------" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	const Animal* j = new Dog();
	std::cout << "            --------------             " << std::endl;
	const Animal* i = new Cat();
	std::cout << "            --------------             " << std::endl;
	delete j; //should not create a leak 
	std::cout << "            --------------             " << std::endl;
	delete i; //should not create a leak 
	std::cout << "            --------------             " << std::endl;

	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "---------------  Deep Copy  -------------------" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	{
		Cat		basic;
		{
			std::cout << "            --------------             " << std::endl;
			Cat		temp = basic;
			std::cout << "            --------------             " << std::endl;
		}
		std::cout << "            --------------             " << std::endl;
	}

	return (0);
}
