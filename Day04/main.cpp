
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "---------- Without Virtual function -----------" << std::endl;

	{
		Animal const * meta = new Animal();
		Animal const * j = new Dog();
		Animal const * i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		meta->makeSound();
		i->makeSound();
		j->makeSound();
	}

	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "---------- With Virtual function -----------" << std::endl;

	{
		Animal const * meta = new Animal();
		Animal const * j = new Dog();
		Animal const * i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		meta->makeSound();
		i->makeSound();
		j->makeSound();
	}

	std::cout << "-----------------------------------------------" << std::endl;

	return (0);
}
