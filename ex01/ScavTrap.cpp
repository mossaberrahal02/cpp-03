#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
    std::cout<<"ScavTrap Default Constructor called"<<std::endl;
}

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name)
{
    std::cout<<"ScavTrap Parametrized Constructor called"<<std::endl;
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::~ScavTrap( void )
{
    std::cout<<"ScavTrap distructor called"<<std::endl;
}

ScavTrap::ScavTrap(ScavTrap &obj):ClapTrap(obj)
{
    std::cout<<"ScavTrap Copy Constructor called"<<std::endl;
    *this = obj;
}

ScavTrap& ScavTrap::operator=(ScavTrap& Obj)
{
    std::cout<<"ScavTrap Copy assignement operator called"<<std::endl;
    if(this != &Obj)
    {
        this->setName(Obj.getName());
        this->setAttackDamage(Obj.getAttackDamage());
        this->setHitPoints(Obj.getHitPoints());
        this->setEnergyPoints(Obj.getEnergyPoints());
    }
    return *this;
}