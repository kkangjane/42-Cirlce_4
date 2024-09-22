#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void leak()
{
	std::system("leaks Fire");
}

int	main()
{
	std::atexit(leak);
	Animal	*animal[10];
	
	std::cout << std::endl << "*** 5 Dogs ***" << std::endl;
	for (int i = 0; i < 5; i++)
		animal[i] = new Dog();

	std::cout << std::endl << "*** 5 Cats ***" << std::endl;
	for (int i = 5; i < 10; i++)
		animal[i] = new Cat();

	// dog|cat 먼저 소멸하고 animal 소멸하는지 확인
	std::cout << std::endl << "*** DELETE ***" << std::endl;
	for (int i = 0; i < 10; i++)
		delete animal[i];

	std::cout << std::endl << "*** check deep copy ***" << std::endl;
	Cat *cat = new Cat();
	Cat *copy = new Cat(*cat);
	std::cout << cat->getBrain()->getIdea(0) << std::endl;
	std::cout << copy->getBrain()->getIdea(0) << std::endl << std::endl;

	std::string tmp = "hello!!";

	copy->getBrain()->setIdea(tmp, 3);
	std::cout << copy->getBrain()->getIdea(3) << std::endl;
	std::cout << cat->getBrain()->getIdea(3) << std::endl;

	delete cat;
	delete copy;
}