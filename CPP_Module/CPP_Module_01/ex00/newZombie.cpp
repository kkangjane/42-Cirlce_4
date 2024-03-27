#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*one = new Zombie(name);
	return (one);
}
