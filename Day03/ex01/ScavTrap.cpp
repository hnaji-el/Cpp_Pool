
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default constructor called <ScavTrap>" << std::endl;
	this->_hitPoints = 100;
	this->_energiePoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name)
{
	std::cout << "Parametrized constructor called <ScavTrap>" << std::endl;
	this->_hitPoints = 100;
	this->_energiePoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called <ScavTrap>" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "Copy constructor called <ScavTrap>" << std::endl;
	*this = src;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Copy assignment operator called <ScavTrap>" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energiePoints = rhs.getEnergiePoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}
void	ScavTrap::attack(std::string const & target)
{
	if (this->_hitPoints > 0 && this->_energiePoints > 0) 
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
		this->_hitPoints -= (int)this->_attackDamage;
		this->_energiePoints--;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}
