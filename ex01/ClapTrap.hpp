#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap{
	public:
		ClapTrap(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string name;
		int	hp;
		int	ep;
		int ad;
};

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(std::string name);
		
	private:
};


#endif