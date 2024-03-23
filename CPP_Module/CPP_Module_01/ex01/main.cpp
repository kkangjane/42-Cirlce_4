#include "Zombie.hpp"

int	main(void)
{
	Zombie	*test = ZombieHorde(10, "zombie");

	// ZombieHorde error
	if (!test)
		return 1;

	// introduce themselves
	for (int i = 0; i < 10; i++)
		test[i].announce();
	delete [] test;
	// system("leaks hord_zombie");
	return 0;
}