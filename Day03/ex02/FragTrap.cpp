 
#include "FragTrap.hpp"
 
FragTrap::FragTrap(void)
{
	std::cout << "Default constructor called <FragTrap>" << std::endl;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap()
{
	std::cout << "Parametrized constructor called <FragTrap>" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energiePoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called <FragTrap>" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "Copy constructor called <FragTrap>" << std::endl;
	*this = src;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "Copy assignment operator called <FragTrap>" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energiePoints = rhs.getEnergiePoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

void	FragTrap::attack(std::string const & target)
{
	if (this->_hitPoints > 0 && this->_energiePoints > 0) 
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
		this->_hitPoints -= (int)this->_attackDamage;
		this->_energiePoints--;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "highFivesGuys member function called <FragTrap>" << std::endl;
}
