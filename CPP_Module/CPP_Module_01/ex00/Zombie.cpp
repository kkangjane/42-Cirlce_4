#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string _name)
{
	this->name = _name;
}

Zombie::~Zombie(void)
{
	std::cout << name << " died" << std::endl;
}
