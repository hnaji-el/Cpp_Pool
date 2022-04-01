 
#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>
# include <exception>

class Form;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
 
public:
	Bureaucrat(void);
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat&	operator=(Bureaucrat const & rhs);
	~Bureaucrat(void);
 
	Bureaucrat(std::string const name, int const grade); /* Throw exception */

	std::string getName(void) const;
	int			getGrade(void) const;
 
	void	incrementGrade(void); /* Throw exception */
	void	decrementGrade(void); /* Throw exception */

	void	signForm(Form& form) const;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("Bureaucrat::GradeTooHighException");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("Bureaucrat::GradeTooLowException");
		}
	};
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & rhs);
 
#endif

