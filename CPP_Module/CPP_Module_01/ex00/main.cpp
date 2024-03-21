#include "Zombie.hpp"

/*
생성자: 클래스 객체가 생성될 때 자동으로 호출된다.
소멸자: 클래스 객체가 소멸될 때 자동으로 실행된다. (스코프를 벗어나거나 delete될 때)
*/

int	main(void)
{
	Zombie	stack_one("stack 1");
	Zombie	*heap_one = new_Zombie("heap 1");

	stack_one.announce();
	heap_one->announce();
	randomChump("random");
	delete heap_one;
	return 0;
}
