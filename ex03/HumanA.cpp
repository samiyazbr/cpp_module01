#include "HumanA.hpp"

HumanA::HumanA(std::string &name, Weapon &weapon_);
{
    this->name = name;
    this->weapon = weapon_;
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() <<std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
    weapon = weapon;
}