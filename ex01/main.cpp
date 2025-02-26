#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    ScavTrap mossab("mossab");
    std::cout<<"mossab.getName() = "<<mossab.getName()<<std::endl;
    std::cout<<"mossab.getHitPoints() = "<<mossab.getHitPoints()<<std::endl;
    std::cout<<"mossab.getEnergyPoints() = "<<mossab.getEnergyPoints()<<std::endl;
    std::cout<<"mossab.getAttackDamage() = "<<mossab.getAttackDamage()<<std::endl;
}