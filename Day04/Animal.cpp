 
#include "Animal.hpp"
 
Animal::Animal(void) : type("Animal")
{
	std::cout << "Default constructor called <Animal>" << std::endl;
}
 
Animal::Animal(std::string const & type) : type(type)
{
	std::cout << "Parametrized constructor called <Animal>" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor called <Animal>" << std::endl;
}
 
Animal::Animal(Animal const & src)
{
	std::cout << "Copy constructor called <Animal>" << std::endl;
	*this = src;
}
 
Animal&	Animal::operator=(Animal const & rhs)
{
	std::cout << "Copy assignment operator called <Animal>" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}
 
void	Animal::makeSound(void) const
{
	std::cout << "Animal Sound ... " << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
