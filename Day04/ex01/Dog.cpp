 
#include "Dog.hpp"
 
Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Default constructor called <Dog>" << std::endl;
}
 
Dog::~Dog(void)
{
	std::cout << "Destructor called <Dog>" << std::endl;
}
 
Dog::Dog(Dog const & src)
{
	std::cout << "Copy constructor called <Dog>" << std::endl;
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

