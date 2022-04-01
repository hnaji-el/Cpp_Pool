 
#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Default constructor called <Bureaucrat>" << std::endl;
}
 
Bureaucrat::Bureaucrat(std::string const name, int const grade) : _name(name), _grade(grade)
{
	std::cout << "Parameterized constructor called <Bureaucrat>" << std::endl;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName())
{
	std::cout << "Copy constructor called <Bureaucrat>" << std::endl;
	*this = src;
}
 
Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::cout << "Copy assignment operator called <Bureaucrat>" << std::endl;
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return (*this);
}
 
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called <Bureaucrat>" << std::endl;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int		Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	this->_grade -= 1;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade(void)
{
	this->_grade += 1;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(AForm& form) const
{
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception& e)
	{
		std::cout << this->_name << " couldn’t sign " << form.getName() << 
		" because his grade is not high enough." << std::endl;
		return ;
	}
	std::cout << this->_name << " signed " << form.getName() << std::endl;
}

void	Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
	}
	catch (AForm::FormNotSignedException& e)
	{
		std::cout << this->_name << " couldn’t execute " << form.getName() << 
		" because this form is not signed." << std::endl;
		return ;
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cout << this->_name << " couldn’t execute " << form.getName() << 
		" because his grade is not high enough." << std::endl;
		return ;
	}
	catch (std::ofstream::failure& e)
	{
		std::cout << "Exception opening/writing/closing file" << std::endl;
		return ;
	}
	std::cout << this->_name << " executed " << form.getName() << std::endl;
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o);
}

