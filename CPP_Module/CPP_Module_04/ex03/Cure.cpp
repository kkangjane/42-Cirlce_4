#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure& obj) : AMateria(obj)
{
	*this = obj;
}

Cure	&Cure::operator=(const Cure& obj)
{
	if (this != &obj)
		this->type = obj.getType();
	return *this;
}

Cure::~Cure()
{
}

Cure*	Cure::clone() const
{
	Cure*	cloned = new Cure();
	return (cloned);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}