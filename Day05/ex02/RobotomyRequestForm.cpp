 
#include "RobotomyRequestForm.hpp"
 
RobotomyRequestForm::RobotomyRequestForm(void) 
	: AForm("robotomyRequest", 72, 45)
{
	std::cout << "Default constructor called <RobotomyRequestForm>" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target)
	: AForm("robotomyRequest", 72, 45), _target(target)
{
	std::cout << "Parameterized constructor called <RobotomyRequestForm>" << std::endl;
}
 
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
	: AForm(src), _target(src.getTarget())
{
	std::cout << "Copy constructor called <RobotomyRequestForm>" << std::endl;
}
 
RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	std::cout << "Copy assignment operator called <RobotomyRequestForm>" << std::endl;
	AForm::operator=(rhs);
	return (*this);
}
 
RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Destructor called <RobotomyRequestForm>" << std::endl;
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void    RobotomyRequestForm::formAction(void) const
{
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << this->_target <<
		" has been robotomized successfully 50% of the time." << std::endl;
	else
		std::cout << "the robotomy failed." << std::endl;
}
