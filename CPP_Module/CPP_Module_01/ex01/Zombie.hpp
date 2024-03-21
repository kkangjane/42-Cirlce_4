#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	Zombie(void);
	~Zombie(void);
	void	announce(void);
	void	AddName(std::string _name);
};

Zombie*	ZombieHorde(int N, std::string name);

#endif