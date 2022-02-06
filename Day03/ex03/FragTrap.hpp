 
#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
 
class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(FragTrap const & src);
	FragTrap&	operator=(FragTrap const & rhs);
	~FragTrap(void);

	FragTrap(std::string const & name);

	void	attack(std::string const & target);

	void	highFivesGuys(void);
 
};
 
#endif

