#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default Constructor called" << std::endl;
}

Cure::Cure(const Cure& obj)
{
	std::cout << "Cure Copy constructor called" << std::endl;
	*this = obj;
}

Cure	&Cure::operator=(const Cure& obj)
{
	std::cout << "Cure Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->type = obj.getType();
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

Cure*	Cure::clone() const
{
	std::cout << "Cure clone called" << std::endl;
	Cure*	cloned = new Cure();
	return (cloned);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}