#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap Constructor Called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->getName();
	std::cout << " gave someone a highfive" << std::endl;
}