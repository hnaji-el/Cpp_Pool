 
#include "Cat.hpp"
 
Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Default constructor called <Cat>" << std::endl;
	this->_brain = new Brain();
}
 
Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Destructor called <Cat>" << std::endl;
}
 
Cat::Cat(Cat const & src)
{
	std::cout << "Copy constructor called <Cat>" << std::endl;
	this->_brain = new Brain();
	*this = src;
}
 
Cat&	Cat::operator=(Cat const & rhs)
{
	std::cout << "Copy assignment operator called <Cat>" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "meow" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (this->_brain);
}
