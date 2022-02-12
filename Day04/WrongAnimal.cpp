 
#include "WrongAnimal.hpp"
 
WrongAnimal::WrongAnimal(void) : type("Animal")
{
	std::cout << "Default constructor called <WrongAnimal>" << std::endl;
}
 
WrongAnimal::WrongAnimal(std::string const & type) : type(type)
{
	std::cout << "Parametrized constructor called <WrongAnimal>" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor called <WrongAnimal>" << std::endl;
}
 
WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "Copy constructor called <WrongAnimal>" << std::endl;
	*this = src;
}
 
WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "Copy assignment operator called <WrongAnimal>" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}
 
void	WrongAnimal::makeSound(void) const
{
	std::cout << "Animal Sound ... " << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
