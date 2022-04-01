 
#include "PresidentialPardonForm.hpp"
 
PresidentialPardonForm::PresidentialPardonForm(void)
	: AForm("presidentialPardon", 25, 5)
{
	std::cout << "Default constructor called <PresidentialPardonForm>" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target)
	: AForm("presidentialPardon", 25, 5), _target(target)
{
	std::cout << "Parameterized constructor called <PresidentialPardonForm>" << std::endl;
}
 
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
	: AForm(src), _target(src.getTarget())
{
	std::cout << "Copy constructor called <PresidentialPardonForm>" << std::endl;
}
 
PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	std::cout << "Copy assignment operator called <PresidentialPardonForm>" << std::endl;
	AForm::operator=(rhs);
	return (*this);
}
 
PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Destructor called <PresidentialPardonForm>" << std::endl;
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void    PresidentialPardonForm::formAction(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

