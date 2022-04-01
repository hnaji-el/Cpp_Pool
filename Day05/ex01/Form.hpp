 
#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class Form
{
private:
	std::string	const	_name;
	bool				_signed;
	int	const			_signGrade;
	int const			_executeGrade;
 
public:
	Form(void);
	Form(Form const & src);
	Form&	operator=(Form const & rhs);
	~Form(void);
 
	Form(std::string const name, int const sGrade, int const eGrade); /* Throw exception */
	
	std::string	getName(void) const;
	bool		getSigned(void) const;
	int			getSignGrade(void) const;
	int			getExecuteGrade(void) const;

	void	beSigned(Bureaucrat const & signer); /* Throw exception */

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("Form::GradeTooHighException");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("Form::GradeTooLowException");
		}
	};
 
};

std::ostream&	operator<<(std::ostream& o, Form const & rhs);
 
#endif

