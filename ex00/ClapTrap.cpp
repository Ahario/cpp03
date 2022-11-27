#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), ep(10), ad(10)
{
	std::cout << "ClapTrap Constructor Called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hp > 0 && this->ep > 0)
	{
		std::cout << "ClapTrap " << this->name << " ";
		std::cout << "attacks " << target << ", ";
		std::cout << "causing " << this->ad << " ";
		std::cout << "points of damage!" << std::endl;
		this->ep -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp > 0)
	{
		std::cout << "ClapTrap " << this->name << " ";
		std::cout << "took " << amount << ", ";
		std::cout << "damage from the enemy" << std::endl;
		this->hp -= amount;
		if (this->hp <= 0)
			this->hp = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp > 0 && this->ep > 0)
	{
		std::cout << "ClapTrap " << this->name << " ";
		std::cout << "restored " << amount << ", ";
		std::cout << "health" << std::endl;
		this->ep -= 1;
		this->hp += amount;
	}
}
