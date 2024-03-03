#include "Zombie.hpp"

Zombie	*new_Zombie(std::string name)
{
	Zombie	*one = new Zombie(name);
	return (one);
}
