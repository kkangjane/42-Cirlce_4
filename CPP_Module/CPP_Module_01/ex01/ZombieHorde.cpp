#include "Zombie.hpp"

Zombie*	ZombieHorde(int N, std::string _name)
{
	if (N < 1)
		return 0; 

	Zombie	*zombies = new Zombie[N];
	if (!zombies)
		return 0;
	
	std::string name;

	for (int i = 0; i < N; i++)
	{
		name = _name + "(" + std::to_string(i + 1) + ")";
		zombies[i].AddName(name);
	}
	return zombies;
}
