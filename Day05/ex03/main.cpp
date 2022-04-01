
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	AForm*	rrf;

	std::cout << "-----------------------------------------------" << std::endl;
	
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}

	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	{
		rrf = someRandomIntern.makeForm("robo", "Bender");
		delete rrf;
	}

	std::cout << "-----------------------------------------------" << std::endl;

	return (0);
}

