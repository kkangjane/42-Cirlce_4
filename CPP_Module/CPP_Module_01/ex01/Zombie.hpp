#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
		std::string	name;
	public:
		void	announce(void);
		void	AddName(std::string _name);
		Zombie(void);
		~Zombie(void);
};

Zombie	*ZombieHorde(int N, std::string name);

#endif