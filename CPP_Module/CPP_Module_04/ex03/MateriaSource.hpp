#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <iostream>
# include <string>


class MateriaSource : public IMateriaSource
{
	private:
		AMateria *inventory[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &obj);
		MateriaSource	&operator=(const MateriaSource &obj);
		~MateriaSource();

		void learnMateria(AMateria *obj);
		AMateria *createMateria(std::string const &type);
};

#endif