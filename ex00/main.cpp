#include "Zombie.hpp"

Zombie	*newZombie(std::string name);

void	randomChump(std::string name);

int	main()
{
	Zombie	*z = newZombie("Pepe");
	z->announce();
	randomChump("Luis");
	delete z;
}
