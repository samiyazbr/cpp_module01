#include "zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie(std::string name)
{
    return (new Zombie(name));
}

void Zombie::randomChump(std::string name)
{
    Zombie Zom(name);
    Zom.announce();
}

Zombie::~Zombie(void)
{
    std::cout << "zombie: " << name << "Destroyed! " << std::endl;
}