#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    protected:
        std::string		name;
        unsigned int	Hit_point;
		unsigned int	Energy_point;
		unsigned int	Attack_damage;

	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		ClapTrap& operator=(const ClapTrap& obj);
		virtual ~ClapTrap();

		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif