#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies = ZombieHorde(10, "zombie");

	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	return (0);
}
