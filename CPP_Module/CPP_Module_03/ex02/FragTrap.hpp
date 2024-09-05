#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& obj);
		FragTrap& operator=(const FragTrap& obj);
		virtual ~FragTrap();

		void    highFivesGuys();
};

#endif