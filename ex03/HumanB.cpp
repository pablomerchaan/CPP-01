#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB (void) {}

void HumanB::setWeapon(Weapon &w)
{
	_weapon = &w;
}

void HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon to attack with!" << std::endl;
}

