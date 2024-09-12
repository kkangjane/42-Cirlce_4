#ifndef AMATARIA_HPP
# define AMATARIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria(std::string const &type);
		AMateria(const AMateria &obj);
		AMateria &operator=(const AMateria &obj);
		~AMateria();

		std::string const	&getType() const;
		virtual	AMateria	*clone() const;
		virtual void		use(ICharacter& target);
};

#endif