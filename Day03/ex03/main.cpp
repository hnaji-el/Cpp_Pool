
#include "FragTrap.hpp"

void	fragTrapAttributes(FragTrap const & fragTrap)
{
	std::cout << "--------- FragTrap ---------" << std::endl;
	std::cout << " Name: " << fragTrap.getName() << std::endl;
	std::cout << " Hit points: " << fragTrap.getHitPoints() << std::endl;
	std::cout << " Energie points: " << fragTrap.getEnergiePoints() << std::endl;
	std::cout << " Attack damage: " << fragTrap.getAttackDamage() << std::endl;
	std::cout << "----------------------------" << std::endl;
}

int	main(void)
{
	FragTrap	character("fragTrapA");

	fragTrapAttributes(character);

	character.attack("characterX");
	character.attack("characterY");

	fragTrapAttributes(character);

	character.beRepaired(60);
	character.takeDamage(40);

	fragTrapAttributes(character);

	character.highFivesGuys();

	return (0);
}

