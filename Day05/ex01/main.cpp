
#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	Form		form("life certificate", 1, 2);
	Bureaucrat	bur1("lm9adm", 2);
	Bureaucrat	bur2("l9ayd", 1);

	std::cout << "--------------------------------------------------------------" << std::endl;
	std::cout << "- lm9adm's grade is not high enough to sign life certificate -" << std::endl;
	std::cout << "--------------------------------------------------------------" << std::endl;

	try
	{
		form.beSigned(bur1);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	bur1.signForm(form);

	std::cout << "--------------------------------------------------------------" << std::endl;
	std::cout << "-     l9ayd's grade high enough  to sign life certificate    -" << std::endl;
	std::cout << "--------------------------------------------------------------" << std::endl;

	try
	{
		form.beSigned(bur2);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	bur2.signForm(form);
	
	return (0);
}

