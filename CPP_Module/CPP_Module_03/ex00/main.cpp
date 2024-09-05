#include "ClapTrap.hpp"

int main()
{
	ClapTrap	Bob("Bob");
	ClapTrap	Alice("Alice");

	Bob.attack("Alice");
	Alice.takeDamage(1);
	Bob.attack("Alice");
	Alice.attack("Bob");
	Alice.beRepaired(2);
	Alice.takeDamage(11);
	Alice.attack("Bob"); //실행되지 않음
	return 0;
}