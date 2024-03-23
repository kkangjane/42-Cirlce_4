#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	this->name = _name;
	this->have_weapon = 0;
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon &_weapon)
{
	this->weapon = &_weapon;
	this->have_weapon = 1;
}

void	HumanB::attack(void)
{
	if (!this->have_weapon)
	{
		std::cout << getName() << " doesn't have any weapon" << std::endl;
		return ;
	}
	std::cout << getName() << " attacks with their ";
	std::cout << this->weapon->getType() << std::endl;
}

std::string	HumanB::getName(void)
{
	return this->name;
}

