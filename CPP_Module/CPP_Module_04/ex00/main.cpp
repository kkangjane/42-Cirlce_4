#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	animal->makeSound();

	std::cout << "**************** new test *****************" << std::endl;

	const WrongAnimal	*wrong_animal = new WrongAnimal();
	const WrongCat		*wrong_cat = new WrongCat();

	wrong_animal->makeSound();
	wrong_cat->makeSound();
	std::cout << std::endl;

	delete animal;
	delete dog;
	delete cat;
	// delete wrong_animal;
	// delete wrong_cat;

	return 0;
}