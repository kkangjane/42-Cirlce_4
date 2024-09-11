#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = obj.getType();
}

Animal&	Animal::operator=(const Animal &obj)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &obj)
		this->type = obj.getType();
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Animal Sound..." << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}