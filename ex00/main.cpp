#include "ClapTrap.hpp"

int main()
{
    ClapTrap mossab("mossab");
    ClapTrap afnane("afnane");

    mossab.attack(afnane.getName());
    afnane.takeDamage(5);
    std::cout<<afnane.getName()<<" before reparing "<<afnane.getHitPoints()<<std::endl;
    afnane.beRepaired(5);
    std::cout<<afnane.getName()<<" after reparing "<<afnane.getHitPoints()<<std::endl;
}