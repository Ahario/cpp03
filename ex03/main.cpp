#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Allan");
	ClapTrap b("HyunSeo");
	ScavTrap c("robot");
	ScavTrap d("roboto");
	a.attack("BlackHole");
	a.attack("BlackHole");
	a.attack("BlackHole");
	a.attack("BlackHole");
	a.attack("BlackHole");
	a.attack("BlackHole");
	a.attack("BlackHole");
	a.attack("BlackHole");
	a.attack("BlackHole");
	a.attack("BlackHole");
	a.attack("BlackHole");
	a.attack("BlackHole");
	b.attack("BH");
	b.takeDamage(11);
	b.attack("BH");
	b.attack("BH");
	b.attack("BH");
	b.attack("BH");
	b.attack("BH");
	c.attack("heheh");
	c.takeDamage(11);
	c.attack("hehehe");
	c.guardGate();
}
