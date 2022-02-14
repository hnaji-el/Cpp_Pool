
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "---------- Without Virtual function -----------" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	{
		WrongAnimal const * meta = new WrongAnimal();
		WrongAnimal const * i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
	}

	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "------------- With Virtual function -----------" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	{
		Animal const * meta = new Animal();
		Animal const * j = new Dog();
		Animal const * i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		j->makeSound();
		i->makeSound();
		meta->makeSound();
		delete i;
		delete j;
		delete meta;
	}

	std::cout << "-----------------------------------------------" << std::endl;

	return (0);
}
