#include "Zombie.hpp"

Zombie*	ZombieHorde(int N, std::string name);

int	main(void)
{
	int	size;

	size = 20;
	Zombie *horde = ZombieHorde(size, "Zom");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
}
