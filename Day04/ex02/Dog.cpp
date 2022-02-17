 
#include "Dog.hpp"
 
Dog::Dog(void) : AAnimal("Dog")
{
	std::cout << "Default constructor called <Dog>" << std::endl;
	this->_brain = new Brain();
}
 
Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Destructor called <Dog>" << std::endl;
}
 
Dog::Dog(Dog const & src)
{
	std::cout << "Copy constructor called <Dog>" << std::endl;
	this->_brain = new Brain();
	*this = src;
}
 
Dog&	Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator called <Dog>" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "bark" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (this->_brain);
}
