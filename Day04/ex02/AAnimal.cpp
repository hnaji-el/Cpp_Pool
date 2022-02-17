 
#include "AAnimal.hpp"
 
AAnimal::AAnimal(void) : type("Animal")
{
	std::cout << "Default constructor called <AAnimal>" << std::endl;
}
 
AAnimal::AAnimal(std::string const & type) : type(type)
{
	std::cout << "Parametrized constructor called <AAnimal>" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Destructor called <AAnimal>" << std::endl;
}
 
AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "Copy constructor called <AAnimal>" << std::endl;
	*this = src;
}
 
AAnimal&	AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << "Copy assignment operator called <AAnimal>" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}

