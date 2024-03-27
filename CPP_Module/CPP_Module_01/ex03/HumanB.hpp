#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon		*weapon;
		std::string	name;
	public:
		HumanB(const std::string _name);
		void		setWeapon(Weapon &_weapon);
		void		attack(void);
};

#endif