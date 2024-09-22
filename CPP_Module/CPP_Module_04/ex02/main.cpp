#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void leak()
{
	std::system("leaks AB");
}

int main()
{
	std::atexit(leak);
	// 해당 주석은 컴파일 불가능. Animal 클래스가 추상 클래스가 되었기 때문에 상속을 통해서만 구현 가능.
	// const Animal *animal = new Animal();
	// delete animal;
	
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	std::cout << std::endl;

	std::cout << std::endl << "*** Make Sound ***" << std::endl;
	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;

	std::cout << "*** DELETE ***" << std::endl;
	delete dog;
	delete cat;

	return 0;
}