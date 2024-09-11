#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	this->type = obj.getType();
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal= called" << std::endl;
	if (this != &obj)
		this->type = obj.getType();
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "wrong animal !" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}