#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string _type);
		~Weapon(void);
		std::string	getType(void);
		void		setType(std::string _type);
};

#endif