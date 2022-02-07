
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "Default constructor called <DiamondTrap>" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const & name) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "Parametrized constructor called <DiamondTrap>" << std::endl;
	this->_hitPoints = 100;
	this->_energiePoints = 50;
	this->_attackDamage = 30;
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
		this->ClapTrap::_name = rhs.ClapTrap::getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energiePoints = rhs.getEnergiePoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

std::string	DiamondTrap::getName(void) const
{
	return (this->_name);
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "name is : " << this->_name << " AND ClapTrap::name is : "  << this->ClapTrap::_name << std::endl;
}




















