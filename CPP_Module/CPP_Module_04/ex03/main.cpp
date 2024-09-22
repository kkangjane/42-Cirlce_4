#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

void	leak()
{
	std::system("leaks test");
}

int	main()
{
	std::atexit(leak);

	IMateriaSource* src = new MateriaSource();
	Ice ice;
	Cure cure;

	src->learnMateria(new Ice);
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character();
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "*** 4번을 더 equip ***" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		tmp = src->createMateria("cure");
		me->equip(tmp);
	}
	for (int i = 0; i < 4; i++)
		me->use(i, *bob);
	
	std::cout << std::endl << "*** 0번을 unequip하고 cure로 넣어보자 ***" << std::endl;
	me->unequip(0);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	for (int i = 0; i < 4; i++)
		me->use(i, *bob);
	
	std::cout << std::endl << "*** 여러번 unequip ***" << std::endl;
	me->unequip(0);
	me->unequip(0);

	delete bob;
	delete me;
	delete src;
	return 0;
}