#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "THINK";
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain Copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];
}

Brain&	Brain::operator=(const Brain &obj)
{
	std::cout << "Brain copy assignment constructor called" << std::endl;
    if (this != &obj)
        return *this;

    for (int i = 0; i < 100; i++){
        this->ideas[i] = obj.ideas[i];
    }
	return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}