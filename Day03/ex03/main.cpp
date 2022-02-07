
#include "DiamondTrap.hpp"

void	diamondTrapAttributes(DiamondTrap const & diamondTrap)
{
	std::cout << "--------- DiamondTrap ---------" << std::endl;
	std::cout << " Name: " << diamondTrap.getName() << std::endl;
	std::cout << " Hit points: " << diamondTrap.getHitPoints() << std::endl;
	std::cout << " Energie points: " << diamondTrap.getEnergiePoints() << std::endl;
	std::cout << " Attack damage: " << diamondTrap.getAttackDamage() << std::endl;
	std::cout << "----------------------------" << std::endl;
}

int	main(void)
{
	DiamondTrap	character("diamondTrapA");

	diamondTrapAttributes(character);

	character.attack("characterX");
	character.attack("characterY");

	diamondTrapAttributes(character);

	character.beRepaired(60);
	character.takeDamage(40);

	diamondTrapAttributes(character);

	character.guardGate();
	character.highFivesGuys();
	character.whoAmI();

	return (0);
}

