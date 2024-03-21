#include "includes/Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type)
{
}

Weapon::~Weapon(void)
{
}

std::string	Weapon::getType(void)
{
	return this->type;
}

void	Weapon::setType(std::string _type)
{
	this->type = _type;
}