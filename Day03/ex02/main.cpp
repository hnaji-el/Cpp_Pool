
#include "ScavTrap.hpp"

void	scavTrapAttributes(ScavTrap const & scavTrap)
{
	std::cout << "--------- ClapTrap ---------" << std::endl;
	std::cout << " Name: " << scavTrap.getName() << std::endl;
	std::cout << " Hit points: " << scavTrap.getHitPoints() << std::endl;
	std::cout << " Energie points: " << scavTrap.getEnergiePoints() << std::endl;
	std::cout << " Attack damage: " << scavTrap.getAttackDamage() << std::endl;
	std::cout << "----------------------------" << std::endl;
}

int	main(void)
{
	ScavTrap	character("scavTrapA");

	scavTrapAttributes(character);

	character.attack("characterX");
	character.attack("characterY");

	scavTrapAttributes(character);

	character.beRepaired(40);
	character.takeDamage(30);

	scavTrapAttributes(character);

	character.guardGate();

	return (0);
}

