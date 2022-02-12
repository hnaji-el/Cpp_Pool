 
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : Animal("Cat")
{
	std::cout << "Default constructor called <WrongCat>" << std::endl;
}
 
WrongCat::~WrongCat(void)
{
	std::cout << "Destructor called <WrongCat>" << std::endl;
}
 
WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "Copy constructor called <WrongCat>" << std::endl;
	*this = src;
}
 
WrongCat&	WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "Copy assignment operator called <WrongCat>" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "meow" << std::endl;
}

