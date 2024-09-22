#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;
	public:
		Cat();
		Cat(const Cat &obj);
		Cat&	operator=(const Cat &obj);
		~Cat();

		void	makeSound() const;
		std::string	getType() const;
		Brain	*getBrain() const;
};

#endif