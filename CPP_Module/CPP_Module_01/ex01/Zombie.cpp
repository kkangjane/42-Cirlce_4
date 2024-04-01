#include "Zombie.hpp"

void	Zombie::Announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::SetName(const std::string _name)
{
	name = _name;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}