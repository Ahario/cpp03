#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual ScavTrap, virtual FragTrap{
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		void whoAmI();
	private:

};
#endif