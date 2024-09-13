#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
	this->type = obj.getType();
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &obj)
{
	std::cout << "Cure copy assignment constructor called" << std::endl;
	if (this != &obj)
		this->type = obj.getType();
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure*		Cure::clone() const
{
	Cure	*clone = new Cure();
	return clone;	
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}