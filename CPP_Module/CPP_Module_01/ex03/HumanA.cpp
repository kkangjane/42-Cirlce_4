#include "HumanA.hpp"

HumanA::HumanA(const std::string _name, Weapon &_weapon): name(_name), weapon(_weapon)
{
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their ";
	std::cout << weapon.getType() << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << name << " attacks with their ";
	std::cout << weapon.getType() << std::endl;
}