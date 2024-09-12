#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main()
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
}