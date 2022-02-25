
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	bur("hamid", 0);
	Bureaucrat	bur("hamid", 151);
	Bureaucrat	bur("hamid", 1);
	bur.incrementGrade();
	Bureaucrat	bur("hamid", 149);
	bur.decrementGrade();

	return (0);
}
