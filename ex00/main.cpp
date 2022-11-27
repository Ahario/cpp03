#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Allan");
	ClapTrap b("HyunSeo");

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
	b.beRepaired(10);
	b.attack("BlackHole");
}