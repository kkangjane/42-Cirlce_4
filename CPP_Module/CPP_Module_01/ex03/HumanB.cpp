#include "includes/HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name)
{
	weapon = 0;
}

HumanB::~HumanB()
{
}
void	HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}

void	HumanB::attack(void)
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks" <<std::endl;
}