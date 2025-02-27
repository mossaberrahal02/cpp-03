#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
    SetColor(GREEN);
    std::cout<<"ScavTrap Default Constructor called"<<std::endl;
    ResetColor();
    std::cout<<"An anonymous ClapTrap created"<<std::endl;
    std::cout<<"    * Energy Pointes = "<<this->getEnergyPoints()<<std::endl;
    std::cout<<"    * Hit Points = "<<this->getHitPoints()<<std::endl;
    std::cout<<"    * Attack Dammage = "<<this->getAttackDamage()<<std::endl;
}

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name)
{
    SetColor(GREEN);
    std::cout<<"ScavTrap Parametrized Constructor called"<<std::endl;
    ResetColor();
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout<<this->getName()<<" created"<<std::endl;
    std::cout<<"    * Energy Pointes = "<<this->getEnergyPoints()<<std::endl;
    std::cout<<"    * Hit Points = "<<this->getHitPoints()<<std::endl;
    std::cout<<"    * Attack Dammage = "<<this->getAttackDamage()<<std::endl;
}

ScavTrap::~ScavTrap( void )
{
    SetColor(RED);
    std::cout<<"ScavTrap distructor called"<<std::endl;
    ResetColor();
}

ScavTrap::ScavTrap(const ScavTrap &obj):ClapTrap(obj)
{
    SetColor(BLUE);
    std::cout<<"ScavTrap Copy Constructor called"<<std::endl;
    ResetColor();
}

ScavTrap& ScavTrap::operator=(const ScavTrap& Obj)
{
    SetColor(BLUE);
    std::cout<<"ScavTrap Copy assignement operator called"<<std::endl;
    ResetColor();
    if(this != &Obj)
        ClapTrap::operator=(Obj);
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " has entered Gatekeeper mode" << std::endl;
}