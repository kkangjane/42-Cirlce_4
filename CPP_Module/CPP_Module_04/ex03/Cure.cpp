#include "Cure.hpp"

AMateria	*Cure::clone() const
{
	AMateria	*copy = new AMateria(*this);
	return copy;
}

void		AMateria::use(ICharacter& target)
{
}

Cure::Cure()
{
	std::cout << "Cure default constructor called" << std::endl;
}