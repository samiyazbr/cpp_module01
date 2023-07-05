#include  "zombie.hpp"

int main(void)
{
    Zombie stackzombie("stack zombie");
    stackzombie.announce();
    stackzombie.randomChump("RandomChump");
    Zombie *heapzombie = stackzombie.newZombie("Heap Zombie");
    heapzombie->announce();
    delete heapzombie;
    return 0;
}