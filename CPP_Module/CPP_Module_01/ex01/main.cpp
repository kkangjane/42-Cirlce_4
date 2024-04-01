#include "Zombie.hpp"

int	main(void)
{
	Zombie	*test = ZombieHorde(10, "zombie");

	for (int i = 0; i < 10; i++)
		test[i].Announce();
	delete [] test;
	
	// system("leaks hord_zombie");
	return 0;
}