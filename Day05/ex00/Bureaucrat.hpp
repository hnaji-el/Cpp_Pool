 
#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
 
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
 
	Bureaucrat(std::string const name, int grade);

	void	incrementGrade(void);
	void	decrementGrade(void);

	std::string const 	getName(void) const;
	int					getGrade(void) const;
 
};
 
#endif

