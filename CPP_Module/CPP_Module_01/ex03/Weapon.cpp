#include "includes/Weapon.hpp"

std::string	Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(const std::string _type)
{
	type = _type;
}

Weapon::Weapon(std::string _type)
{
	type = _type;
}

Weapon::~Weapon(void)
{
	
}