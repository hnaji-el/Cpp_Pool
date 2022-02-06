 
#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>
 
class ClapTrap
{
protected:
	std::string		_name;
	int				_hitPoints;
	int				_energiePoints;
	unsigned int	_attackDamage;
 
public:
	ClapTrap(void);
	ClapTrap(ClapTrap const & src);
	ClapTrap&	operator=(ClapTrap const & rhs);
	~ClapTrap(void);
  
	ClapTrap(std::string const & name);

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string		getName(void) const;
	int				getHitPoints(void) const;
	int				getEnergiePoints(void) const;
	unsigned int	getAttackDamage(void) const;
};
 
#endif

