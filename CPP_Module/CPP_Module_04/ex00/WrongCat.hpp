#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>

class WrongCat
{
	protected:
		std::string	type;

	public:
		WrongCat();
		WrongCat(const WrongCat &obj);
		WrongCat&		operator=(const WrongCat &obj);
		virtual				~WrongCat();
		virtual	void		makeSound() const;
		virtual std::string	getType() const;
};


#endif