#include "HumanA.hpp"

HumanA::HumanA(std::string &name, Weapon &weapon_) : weapon(weapon_) , name(name)
{
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() <<std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
    weapon = weapon;
}