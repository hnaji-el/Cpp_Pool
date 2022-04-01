 
#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "AForm.hpp"
 
class PresidentialPardonForm : public AForm
{
private:
	std::string	const	_target;
 
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	PresidentialPardonForm&	operator=(PresidentialPardonForm const & rhs);
	~PresidentialPardonForm(void);

	PresidentialPardonForm(std::string const target);

	std::string	getTarget(void) const;
 
	void	formAction(void) const;
 
};
 
#endif

