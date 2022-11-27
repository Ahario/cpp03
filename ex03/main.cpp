#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap a("Allan");
	ClapTrap b("HyunSeo");
	ScavTrap c("robot");
	ScavTrap d("roboto");
	FragTrap e("fraggin");
	DiamondTrap f("monster");
	f.whoAmI();
	f.attack("BackHole");
}
