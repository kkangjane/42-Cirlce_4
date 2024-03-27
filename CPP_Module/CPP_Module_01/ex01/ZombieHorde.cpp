#include "Zombie.hpp"

Zombie*	ZombieHorde(int N, std::string _name)
{
	if (N < 1)
		return 0; 

	Zombie	*zombies = new Zombie[N];
	
	std::stringstream	name_stream;

	for (int i = 0; i < N; i++)
	{
		name_stream.str(std::string());
		name_stream << i + 1;
		zombies[i].SetName(_name + " " + name_stream.str());
	}
	return zombies;
}
