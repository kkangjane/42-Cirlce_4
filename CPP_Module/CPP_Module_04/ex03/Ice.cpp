#include "Ice.hpp"

AMateria	*Ice::clone() const
{
	AMateria	*copy = new AMateria(*this);
	return copy;
}

void		AMateria::use(ICharacter& target)
{

}

Ice::Ice()
{
	std::cout << "Cure default constructor called" << std::endl;
}