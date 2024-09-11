#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		Dog();
		Dog(const Dog &obj);
		Dog&	operator=(const Dog &obj);
		~Dog();

		void	makeSound() const;
		std::string	getType() const;
};

#endif