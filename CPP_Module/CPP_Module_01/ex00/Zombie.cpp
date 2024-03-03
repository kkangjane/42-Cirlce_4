#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string _name)
{
	name = _name;
}

Zombie::~Zombie(void)
{
	std::cout << name << " died" << std::endl;
}
