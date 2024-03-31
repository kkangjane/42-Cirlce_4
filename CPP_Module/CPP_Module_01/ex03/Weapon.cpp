#include "Weapon.hpp"

Weapon::Weapon(const std::string _type) : type(_type)
{
}

const std::string	&Weapon::getType(void)
{
	return type;
}

void	Weapon::setType(const std::string _type)
{
	type = _type;
}