 
#include "Bureaucrat.hpp"
 
Bureaucrat::Bureaucrat(void)
{
	std::cout << "Default constructor called" << std::endl;
}
 
Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src);
{
	std::cout << "Copy constructor called" << std::endl;
}
 
Bureaucrat&	operator=(Bureaucrat const & rhs);
{
	std::cout << "Copy assignment operator called" << std::endl;
}
 
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Bureaucrat::getName(void) const
{
}

void	Bureaucrat::getGrade(void) const
{
}

void	Bureaucrat::incrementGrade(void)
{
}

void	Bureaucrat::decrementGrade(void)
{
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & rhs)
{
}













