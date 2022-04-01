
#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << " --------------------------------------------- " << std::endl;
	std::cout << " ----- Bureaucrat::GradeTooLowException ------ " << std::endl;
	std::cout << " --------------------------------------------- " << std::endl;

	try
	{
		Bureaucrat	bur("hamid", 150);

		std::cout << bur << std::endl;
		bur.incrementGrade();
		std::cout << bur << std::endl;
		bur.decrementGrade();
		std::cout << bur << std::endl;
		bur.decrementGrade(); // Throw exception
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	bur("hamid", 151); // Throw exception
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << " --------------------------------------------- " << std::endl;
	std::cout << " ----- Bureaucrat::GradeTooHighException ----- " << std::endl;
	std::cout << " --------------------------------------------- " << std::endl;

	try
	{
		Bureaucrat	bur("hamid", 1);

		std::cout << bur << std::endl;
		bur.incrementGrade(); // Throw exception
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	bur("hamid", 0); // Throw exception
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}

