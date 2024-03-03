#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::AddName(std::string _name)
{
	name = _name;
}


Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << name << " died" << std::endl;
}
