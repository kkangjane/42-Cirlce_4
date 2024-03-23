#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	private:
		int			have_weapon;
		Weapon		*weapon;
		std::string	name;
	public:
		HumanB(std::string _name);
		~HumanB(void);
		void		setWeapon(Weapon &_weapon);
		void		attack(void);
		std::string	getName(void);
};

#endif