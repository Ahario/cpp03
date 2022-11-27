#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)  : ClapTrap(name + "_clap_trap"), ScavTrap(name + "_clap_trap"), FragTrap(name + "_clap_trap")
{
	this->name = name;
	std::cout << "DiamondTrap Constructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{

}

void DiamondTrap::whoAmI()
{
	std::cout << "I'am " << this->name << std::endl;
}