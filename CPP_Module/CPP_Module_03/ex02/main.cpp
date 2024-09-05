#include "FragTrap.hpp"

int main()
{
    FragTrap Bob("Bob");
    FragTrap Alice("Alice");
    std::cout << std::endl;

    Alice.attack("Bob");
    Bob.takeDamage(20);
    Bob.beRepaired(3);
    std::cout << std::endl;

    Bob.attack("Alice");
    Alice.takeDamage(100);
    Alice.beRepaired(3);
    std::cout << std::endl;

    Alice.highFivesGuys();
    Bob.highFivesGuys();

    std::cout << std::endl;
    return 0;
}