
#include "ClapTrap.hpp"

void	clapTrapAttributes(ClapTrap const & clapTrap)
{
	std::cout << "--------- ClapTrap ---------" << std::endl;
	std::cout << " Name: " << clapTrap.getName() << std::endl;
	std::cout << " Hit points: " << clapTrap.getHitPoints() << std::endl;
	std::cout << " Energie points: " << clapTrap.getEnergiePoints() << std::endl;
	std::cout << " Attack damage: " << clapTrap.getAttackDamage() << std::endl;
	std::cout << "----------------------------" << std::endl;
}

int	main(void)
{
	ClapTrap	character("clapTrapA");

	clapTrapAttributes(character);

	character.takeDamage(3);
	character.attack("characterX");
	character.attack("characterY");

	clapTrapAttributes(character);

	character.attack("characterW");

	clapTrapAttributes(character);

	character.beRepaired(2);
	character.attack("characterZ");

	clapTrapAttributes(character);

	character.attack("characterQ");

	return (0);
}

