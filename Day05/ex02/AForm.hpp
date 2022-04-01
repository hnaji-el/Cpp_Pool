 
#ifndef AFORM_H
# define AFORM_H

# include <iostream>
# include <string>
# include <exception>
# include <fstream>

class Bureaucrat;

class AForm
{
private:
	std::string	const	_name;
	bool				_signed;
	int	const			_signGrade;
	int const			_executeGrade;
 
public:
	AForm(void);
	AForm(AForm const & src);
	AForm&	operator=(AForm const & rhs);
	virtual ~AForm(void);
 
	AForm(std::string const name, int const sGrade, int const eGrade); /* Throw exception */
	
	std::string	getName(void) const;
	bool		getSigned(void) const;
	int			getSignGrade(void) const;
	int			getExecuteGrade(void) const;

	void	beSigned(Bureaucrat const & signer); /* Throw exception */
	void	execute(Bureaucrat const & executor) const; /* Throw exception */
	virtual void	formAction(void) const = 0;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("AForm::GradeTooHighException");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("AForm::GradeTooLowException");
		}
	};
 
	class FormNotSignedException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("AForm::FormNotSignedException");
		}
	};

};

std::ostream&	operator<<(std::ostream& o, AForm const & rhs);
 
#endif

