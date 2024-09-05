#include "ScavTrap.hpp"

int main()
{
    ScavTrap Bob("Bob");
    ScavTrap Alice("Alice");
    std::cout << std::endl;

    Alice.attack("Bob");
    Bob.takeDamage(20);
    Bob.beRepaired(3);
    std::cout << std::endl;

    Bob.attack("Alice");
    Alice.takeDamage(100);
    Alice.beRepaired(3);
    std::cout << std::endl;

    Alice.guardGate();
    Bob.guardGate();

    std::cout << std::endl;
    return 0;
}