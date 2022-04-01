 
#include "Form.hpp"
#include "Bureaucrat.hpp"
 
Form::Form(void) : _signed(false), _signGrade(150), _executeGrade(150)
{
	std::cout << "Default constructor called <Form>" << std::endl;
}

Form::Form(std::string const name, int const sGrade, int const eGrade)
	: _name(name), _signed(false), _signGrade(sGrade), _executeGrade(eGrade)
{
	std::cout << "Parameterized constructor called <Form>" << std::endl;
	if (this->_signGrade > 150 || this->_executeGrade > 150)
		throw Form::GradeTooLowException();
	if (this->_signGrade < 1 || this->_executeGrade < 1)
		throw Form::GradeTooHighException();
}
 
Form::Form(Form const & src) : _name(src.getName()),
	_signGrade(src.getSignGrade()), _executeGrade(src.getExecuteGrade())
{
	std::cout << "Copy constructor called <Form>" << std::endl;
	*this = src;
}
 
Form&	Form::operator=(Form const & rhs)
{
	std::cout << "Copy assignment operator called <Form>" << std::endl;
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Destructor called <Form>" << std::endl;
}
 
std::string	Form::getName(void) const
{
	return (this->_name);
}

bool		Form::getSigned(void) const
{
	return (this->_signed);
}

int			Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int			Form::getExecuteGrade(void) const
{
	return (this->_executeGrade);
}

void	Form::beSigned(Bureaucrat const & signer)
{
	if (signer.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& o, Form const & rhs)
{
	o << "The Form's name                  : " << rhs.getName();
	o << "The grade required to sign it    : " << rhs.getSignGrade();
	o << "The grade required to execute it : " << rhs.getExecuteGrade();
	o << "Is Signed                        : " << rhs.getSigned() << std::endl;
	return (o);
}

