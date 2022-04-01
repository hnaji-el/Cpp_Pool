 
#include "AForm.hpp"
#include "Bureaucrat.hpp"
 
AForm::AForm(void) : _signed(false), _signGrade(150), _executeGrade(150)
{
	std::cout << "Default constructor called <AForm>" << std::endl;
}

AForm::AForm(std::string const name, int const sGrade, int const eGrade)
	: _name(name), _signed(false), _signGrade(sGrade), _executeGrade(eGrade)
{
	std::cout << "Parameterized constructor called <AForm>" << std::endl;
	if (this->_signGrade > 150 || this->_executeGrade > 150)
		throw AForm::GradeTooLowException();
	if (this->_signGrade < 1 || this->_executeGrade < 1)
		throw AForm::GradeTooHighException();
}
 
AForm::AForm(AForm const & src) : _name(src.getName()),
	_signGrade(src.getSignGrade()), _executeGrade(src.getExecuteGrade())
{
	std::cout << "Copy constructor called <AForm>" << std::endl;
	*this = src;
}
 
AForm&	AForm::operator=(AForm const & rhs)
{
	std::cout << "Copy assignment operator called <AForm>" << std::endl;
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << "Destructor called <AForm>" << std::endl;
}
 
std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool		AForm::getSigned(void) const
{
	return (this->_signed);
}

int			AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}

int			AForm::getExecuteGrade(void) const
{
	return (this->_executeGrade);
}

void	AForm::beSigned(Bureaucrat const & signer)
{
	if (signer.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (this->_signed == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->_executeGrade)
		throw AForm::GradeTooLowException();
	else
		this->formAction();
		
}

std::ostream&	operator<<(std::ostream& o, AForm const & rhs)
{
	o << "The Form's name                  : " << rhs.getName();
	o << "The grade required to sign it    : " << rhs.getSignGrade();
	o << "The grade required to execute it : " << rhs.getExecuteGrade();
	o << "Is Signed                        : " << rhs.getSigned() << std::endl;
	return (o);
}

