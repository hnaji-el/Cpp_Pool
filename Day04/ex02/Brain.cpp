 
#include "Brain.hpp"
 
Brain::Brain(void)
{
	std::cout << "Default constructor called <Brain>" << std::endl;
}
 
Brain::~Brain(void)
{
	std::cout << "Destructor called <Brain>" << std::endl;
}
 
Brain::Brain(Brain const & src)
{
	std::cout << "Copy constructor called <Brain>" << std::endl;
	*this = src;
}
 
Brain&	Brain::operator=(Brain const & rhs)
{
	std::cout << "Copy assignment operator called <Brain>" << std::endl;
	(void)rhs;
	return (*this);
}

