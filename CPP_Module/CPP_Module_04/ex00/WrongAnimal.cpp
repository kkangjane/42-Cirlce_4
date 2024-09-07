#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = "animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	this->type = obj.getType();
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj)
{
	this->type = obj.getType();
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal Sound." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}