#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon): name(_name), weapon(_weapon)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << getName() << " attacks with their ";
	std::cout << this->weapon.getType() << std::endl;
}

std::string	HumanA::getName(void)
{
	return this->name;
}