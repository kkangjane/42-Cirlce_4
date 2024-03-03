#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
	private:
		Weapon		&weapon;
		std::string	name;
	public:
		HumanA(std::string _name, Weapon &_weapon);
		~HumanA(void);
		void		attack(void);
};

#endif