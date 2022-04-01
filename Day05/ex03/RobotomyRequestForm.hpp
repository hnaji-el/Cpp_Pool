 
#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>
 
class RobotomyRequestForm : public AForm
{
private:
	std::string	const	_target;
 
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	RobotomyRequestForm&	operator=(RobotomyRequestForm const & rhs);
	~RobotomyRequestForm(void);

	RobotomyRequestForm(std::string const target);

	std::string	getTarget(void) const;
 
	void	formAction(void) const;
 
};
 
#endif

