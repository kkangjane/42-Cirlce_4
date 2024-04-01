#include "Zombie.hpp"

int	main(void)
{
	Zombie	stack_one("stack 1");
	Zombie	*heap_one = newZombie("heap 1");

	stack_one.Announce();
	heap_one->Announce();
	randomChump("random");
	delete heap_one;
	return 0;
}
