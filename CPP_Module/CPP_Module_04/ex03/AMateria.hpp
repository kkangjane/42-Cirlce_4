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
		virtual	AMateria	*clone() const = 0; // 순수 가상 함수
		virtual void		use(ICharacter& target);
};

#endif