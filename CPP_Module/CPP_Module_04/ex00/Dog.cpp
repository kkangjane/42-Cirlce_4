#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &obj): Animal(obj)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->type = obj.getType();
}

Dog&	Dog::operator=(const Dog &obj)
{
	std::cout << "Dog= called" << std::endl;
	this->type = obj.getType();
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

std::string	Dog::getType() const
{
	return this->type;
}