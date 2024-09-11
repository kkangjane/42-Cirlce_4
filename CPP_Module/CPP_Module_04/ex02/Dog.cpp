#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &obj): Animal(obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = obj.getType();
	this->brain = new Brain(*obj.brain);
}

Dog&	Dog::operator=(const Dog &obj)
{
	std::cout << "dog copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.getType();
		this->brain = new Brain(*obj.brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

std::string	Dog::getType() const
{
	delete brain;
	return this->type;
}