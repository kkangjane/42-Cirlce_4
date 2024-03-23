#include "Zombie.hpp"

int	main(void)
{
	Zombie	stack_one("stack 1");
	Zombie	*heap_one = new_Zombie("heap 1");

	stack_one.announce();
	heap_one->announce();
	randomChump("random");
	delete heap_one;
	return 0;
}
