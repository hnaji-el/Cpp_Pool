 
#include "DiamondTrap.hpp"
 
DiamondTrap::DiamondTrap(void)
{
	std::cout << "Default constructor called <DiamondTrap>" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const & name) : ClapTrap()
{
	std::cout << "Parametrized constructor called <DiamondTrap>" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor called <DiamondTrap>" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "Copy constructor called <DiamondTrap>" << std::endl;
	*this = src;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "Copy assignment operator called <DiamondTrap>" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energiePoints = rhs.getEnergiePoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}
