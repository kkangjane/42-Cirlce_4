#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria	*inventory[4];
		std::string	name;

	public:
		Character();
		Character(std::string name);
		Character(const Character &obj);
		Character &operator=(const Character &obj);
		~Character();

		std::string const	&getName() const = 0;
		void				equip(AMateria *m) = 0;
		void				unequip(int idx) = 0;
		void				use(int idx, ICharacter& target) = 0;
		AMateria			*getMeteriaFromInventory(int idx);
};

#endif