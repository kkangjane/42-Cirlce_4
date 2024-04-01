#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <sstream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(void);
		~Zombie(void);
		void	Announce(void);
		void	SetName(const std::string _name);
};

Zombie*	ZombieHorde(int N, std::string name);

#endif