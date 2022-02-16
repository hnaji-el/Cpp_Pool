
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	AAnimal	a;

	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "------------  Virtual Destructor  -------------" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j; //should not create a leak 
	delete i; //should not create a leak 

	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "---------------  Deep Copy  -------------------" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	{
		Cat		basic;
		{
			Cat		temp = basic;
		}
	}

	return (0);
}
