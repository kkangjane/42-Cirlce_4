#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	Announce(void);
		void	Announce(void) const;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif