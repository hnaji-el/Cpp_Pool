
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(10), _energiePoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name) : _name(name), _hitPoints(10),
	_energiePoints(10), _attackDamage(0)
{
	std::cout << "Parametrized constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energiePoints = rhs.getEnergiePoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	if (_hitPoints > 0 && _energiePoints > 0) 
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
		this->_hitPoints -= (int)this->_attackDamage;
		this->_energiePoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energiePoints > 0) 
	{
		std::cout << "ClapTrap " << this->_name << " take " << amount;
		std::cout << " points of damage!" << std::endl;
		this->_attackDamage = amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energiePoints > 0) 
	{
		std::cout << "ClapTrap " << this->_name << " repairs itself, it gets ";
		std::cout << amount << " hit points back!" << std::endl;
		this->_hitPoints += (int)amount;
		this->_energiePoints--;
	}
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int	ClapTrap::getEnergiePoints(void) const
{
	return (this->_energiePoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

