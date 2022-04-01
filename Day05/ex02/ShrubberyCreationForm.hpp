 
#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "AForm.hpp"
 
class ShrubberyCreationForm : public AForm
{
private:
	std::string	const	_target;
 
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const & rhs);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm(std::string const target);

	std::string	getTarget(void) const;
 
	void	formAction(void) const; /* Throw exception */

};
 
#endif

