#ifndef AMATARIA_HPP
# define AMATARIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &obj);
		AMateria &operator=(const AMateria &obj);
		virtual ~AMateria();

		std::string			const & getType() const;
		virtual	AMateria	*clone() const;
		virtual void		use(ICharacter& target);
};

#endif