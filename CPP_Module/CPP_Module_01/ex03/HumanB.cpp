#include "HumanB.hpp"

HumanB::HumanB(const std::string _name)
{
	name = _name;
	weapon = 0;
}

void	HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}

void	HumanB::attack(void)
{
	if (!weapon)
	{
		std::cout << name << " doesn't have any weapon" << std::endl;
		return ;
	}
	std::cout << name << " attacks with their ";
	std::cout << weapon->getType() << std::endl;
}


