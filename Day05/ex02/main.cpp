
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	{
		Bureaucrat				bur1("l9ayd", 137);
		Bureaucrat				bur2("lbasha", 138);
		Bureaucrat				bur3("lm9adm", 144);
		ShrubberyCreationForm	form("home");

		std::cout << "   >>>          ShrubberyCreation Form is not signed       <<<" << std::endl;

		bur1.executeForm(form);

		std::cout << "   >>> executor's grade is not high enough to execute form <<<" << std::endl;

		bur3.signForm(form);
		bur2.executeForm(form);

		std::cout << "   >>>      All requirements fulfilled to execute form     <<<" << std::endl;

		bur1.executeForm(form);

		std::cout << std::endl;
	}

	std::cout << "------------------------------------------------------------------" << std::endl;
	std::cout << "------------------------------------------------------------------" << std::endl;

	{
		Bureaucrat				bur1("president", 1);
		Bureaucrat				bur2("president's advisor", 6);
		Bureaucrat				bur3("vice president", 7);
		PresidentialPardonForm	form("prisoners");
		
		std::cout << "   >>>        PresidentialPardon Form is not signed       <<<" << std::endl;

		bur1.executeForm(form);

		std::cout << "   >>> executor's grade is not high enough to execute form <<<" << std::endl;

		bur3.signForm(form);
		bur2.executeForm(form);

		std::cout << "   >>>     All requirements fulfilled to execute form     <<<" << std::endl;

		bur1.executeForm(form);

		std::cout << std::endl;
	}

	return (0);
}

