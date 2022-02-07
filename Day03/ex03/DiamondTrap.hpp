 
#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
 
class DiamondTrap
{
private:
	std::string	_name;
 
public:
	DiamondTrap(void);
	DiamondTrap(DiamondTrap const & src);
	DiamondTrap&	operator=(DiamondTrap const & rhs);
	~DiamondTrap(void);
 
	DiamondTrap(std::string const & name);

	int	getName(void) const;

	void	attack(std::string const & target);

	void	whoAmI(void);
 
};
 
#endif

