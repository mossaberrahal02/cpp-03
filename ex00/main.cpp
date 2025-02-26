#include "ClapTrap.hpp"

int main()
{
    ClapTrap mossab("mossab");
    ClapTrap afnane("afnane");

    mossab.attack(afnane.getName());
    afnane.takeDamage(4);
    afnane.beRepaired(4);
}