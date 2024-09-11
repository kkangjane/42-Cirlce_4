#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main()
{
	Animal	*animal[10];
	
	for (int i = 0; i < 5; i++)
		animal[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animal[i] = new Cat();
	std::cout << std::endl;

	// dog|cat 먼저 소멸하고 animal 소멸하는지 확인
	for (int i = 0; i < 10; i++)
		delete animal[i];
	std::cout << std::endl;
	
}