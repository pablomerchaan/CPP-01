#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie()
{
    std::cout << name << " has been destroyed." << std::endl;
}

std::string	Zombie::getname() const
{
	return name;
}

void	Zombie::announce()
{
	std::cout << getname() << ": BraiiiiiiinnnzzzZ...";
}
