#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:
		std::string	type;
	
	public:
		Cat();
		Cat(const Cat &obj);
		Cat&	operator=(const Cat &obj);
		~Cat();
		void	makeSound() const;
		std::string	getType() const;
};

#endif