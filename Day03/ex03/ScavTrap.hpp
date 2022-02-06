 
#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
 
class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(ScavTrap const & src);
	ScavTrap&	operator=(ScavTrap const & rhs);
	~ScavTrap(void);

	ScavTrap(std::string const & name);

	void	attack(std::string const & target);
 
	void	guardGate(void);
 
};
 
#endif

