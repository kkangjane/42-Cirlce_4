#include "Zombie.hpp"

Zombie::Zombie(std::string _name) : name(_name)
{
}

Zombie::~Zombie(void)
{
	std::cout << name << " died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
