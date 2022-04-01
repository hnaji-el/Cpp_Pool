 
#ifndef INTERN_H
# define INTERN_H

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
 
class Intern
{
private:
	AForm*	makeShrubberyCreationForm(std::string const formTarget) const;
	AForm*	makeRobotomyRequestForm(std::string const formTarget) const;
	AForm*	makePresidentialPardonForm(std::string const formTarget) const;

public:
	Intern(void);
	Intern(Intern const & src);
	Intern&	operator=(Intern const & rhs);
	~Intern(void);
 
 	AForm*	makeForm(std::string const formName, std::string const formTarget) const;
 
};
 
#endif

