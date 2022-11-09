#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(" "), hp(10), ep(10), ad(10)
{
	std::cout << "ClapTrap Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), ep(10), ad(10)
{
	std::cout << "ClapTrap Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->getHP() > 0 && this->getEP() > 0)
	{
		std::cout << "ClapTrap " << "<" << this->name << "> ";
		std::cout << "attacks " << "<" << target << ">, ";
		std::cout << "causing " << "<" << this->ad << "> ";
		std::cout << "points of damage!" << std::endl;
		this->setEP(this->getEP() - 1);
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHP() > 0)
	{
		std::cout << "ClapTrap " << "<" << this->name << "> ";
		std::cout << "took " << "<" << amount << ">, ";
		std::cout << "damage from the enemy" << std::endl;
		this->setHP(this->getHP() - amount);
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHP() > 0 && this->getEP() > 0)
	{
		std::cout << "ClapTrap " << "<" << this->name << "> ";
		std::cout << "restored "  << "<" << amount << ">, ";
		std::cout << "health" << std::endl;
		this->setEP(this->getEP() - 1);
		this->setHP(this->getHP() + amount);
	}
}

std::string ClapTrap::getName()
{
	return(this->name);
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}

void ClapTrap::setHP(int i)
{
	this->hp = i;
}

int ClapTrap::getHP()
{
	return(this->hp);
}

void ClapTrap::setEP(int i)
{
	this->ep = i;
}

int ClapTrap::getEP()
{
	return(this->ep);
}

void ClapTrap::setAD(int i)
{
	this->ad = i;
}

int ClapTrap::getAD()
{
	return(this->ad);
}

ClapTrap::ClapTrap(std::string name, int i, int j, int k)
{
	this->name = name;
	this->hp = i;
	this->ep = j;
	this->ad = k;
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
	std::cout << "ScavTrap " << "<" << this->getName() << "> ";
	std::cout << "is in Gatekeeper mode" << std::endl;
}

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
	std::cout << "FragTrap " << "<" << this->getName() << "> ";
	std::cout << "gave someone a highfive" << std::endl;
}