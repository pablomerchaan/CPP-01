#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "HumanA.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	attack() const;
		void	setWeapon(Weapon &weapon);
};

#endif
