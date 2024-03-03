#include "includes/HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string _name, Weapon &_weapon) : weapon(_weapon), name(_name)
{
}

HumanA::~HumanA(void)
{
}
