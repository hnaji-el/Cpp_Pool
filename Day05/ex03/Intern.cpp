 
#include "Intern.hpp"
 
Intern::Intern(void)
{
	std::cout << "Default constructor called <Intern>" << std::endl;
}
 
Intern::Intern(Intern const & src)
{
	std::cout << "Copy constructor called <Intern>" << std::endl;
	(void)src;
}
 
Intern&	Intern::operator=(Intern const & rhs)
{
	std::cout << "Copy assignment operator called <Intern>" << std::endl;
	(void)rhs;
	return (*this);
}
 
Intern::~Intern(void)
{
	std::cout << "Destructor called <Intern>" << std::endl;
}

AForm*	Intern::makeShrubberyCreationForm(std::string const formTarget) const
{
	AForm*	formObject;

	formObject = new ShrubberyCreationForm(formTarget);
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return (formObject);
}

AForm*	Intern::makeRobotomyRequestForm(std::string const formTarget) const
{
	AForm*	formObject;

	formObject = new RobotomyRequestForm(formTarget);
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return (formObject);
}

AForm*	Intern::makePresidentialPardonForm(std::string const formTarget) const
{
	AForm*	formObject;

	formObject = new PresidentialPardonForm(formTarget);
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return (formObject);
}

AForm*	Intern::makeForm(std::string const formName, std::string const formTarget) const
{
	AForm*	(Intern::*arrayOfMemberFunPtr[3])(std::string const) const = {
		&Intern::makeShrubberyCreationForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm
	};
	std::string		arrayOfString[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	for (size_t index = 0; index < 3; index++)
	{
		if (formName == arrayOfString[index])
			return ((this->*arrayOfMemberFunPtr[index])(formTarget));
	}
	std::cout << "Intern did not create any Form "
		"because the form name doesn’t exist" << std::endl;
	return (NULL);
}

