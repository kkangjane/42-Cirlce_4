#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    private:
        std::string		name;
        unsigned int	Hit_point;
		unsigned int	Energy_point;
		unsigned int	Attack_damage;

	public:
		//ClapTrap(); 인자가 없는 생성자는 고려하지 않음.
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		ClapTrap& operator=(const ClapTrap& obj);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif