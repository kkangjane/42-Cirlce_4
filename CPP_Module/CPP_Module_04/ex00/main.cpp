#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void leak()
{
	std::system("leaks Polymorphism");
}

int main()
{
	std::atexit(leak);
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl << "*** Get Type ***" << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	std::cout << std::endl << "*** Make Sound ***" << std::endl;
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

	std::cout << std::endl << "*** Wrong Animal Start ***" << std::endl;
	const WrongAnimal	*wrong_animal = new WrongAnimal();
	const WrongAnimal	*wrong_cat = new WrongCat();
	const WrongCat		*wrong_wrong_cat = new WrongCat();

	std::cout << std::endl << "*** Wrong Animal Make Sound ***" << std::endl;
	wrong_animal->makeSound();
	wrong_cat->makeSound();
	wrong_wrong_cat->makeSound();

	std::cout << std::endl << "*** DELETE ***" << std::endl;
	delete animal;
	delete dog;
	delete cat;
	delete wrong_animal;
	delete wrong_cat;
	delete wrong_wrong_cat;
	return 0;
}