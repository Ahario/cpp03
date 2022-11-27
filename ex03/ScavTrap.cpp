#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(" ", 100, 50, 20)
{

}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " ";
	std::cout << "is in Gatekeeper mode" << std::endl;
}