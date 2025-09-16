#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie	*Zombie::newZombie(std::string name)
{
	Zombie	newZ("Pepe");

	return (&newZ);
}
