#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, int i, int j, int k);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName(void);
		void setName(std::string name);
		int getHP();
		void setHP(int i);
		int	getEP();
		void setEP(int i);
		int getAD();
		void setAD(int i);
	private:
		std::string name;
		int	hp;
		int	ep;
		int ad;
};

#endif