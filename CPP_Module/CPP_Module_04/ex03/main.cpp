#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

/*
- Ice, Cure는 amateria의 자식 클래스. Amateria에서는 type을 담고 있다.
- ICharacter는 interface 클래스. Character 클래스를 위함.
- Character는 4개의 slot(Materia를 담음)을 가짐. unequip(slot[idx] 버리기), equip(slot[idx]에 장착하기), use(slot[idx]를 사용하기)등의 함수 존재

*/

void	leak()
{
	std::system("leaks test");
}

int	main()
{
	std::atexit(leak);
	IMateriaSource* src = new MateriaSource();
	Ice	ice;
	Cure cure;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	printf("==============================\n");
	printf("celar learnMateria\n");
	printf("==============================\n");
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character();
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}