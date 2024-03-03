#include "Zombie.hpp"

Zombie	*ZombieHorde(int N, std::string name)
{
	Zombie	*zombies = new Zombie[N];
	std::string	temp;

	for (int i = 0; i < N; i++)
	{
		temp = name + " " + std::to_string(i);
		zombies[i].AddName(temp);
	}
	return zombies;
}
