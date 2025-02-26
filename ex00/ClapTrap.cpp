#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
Name(""),
HitPoints(10),
EnergyPoints(10),
AttackDamage(0)
{
    std::cout<<"Default constructor called"<<std::endl;
    std::cout<<"An anonymous ClapTrap created"<<std::endl;
    std::cout<<"    * Energy Pointes = "<<this->getEnergyPoints()<<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"destructor called"<<std::endl;    
}

ClapTrap::ClapTrap(const ClapTrap& old_obj)
{
    std::cout<<"Copy constructor called"<<std::endl;
    this->Name = old_obj.getName();
    this->HitPoints = old_obj.getHitPoints();
    this->EnergyPoints = old_obj.getEnergyPoints();
    this->AttackDamage = old_obj.getAttackDamage();
}

ClapTrap& ClapTrap::operator=(const ClapTrap& old_obj)
{
    std::cout<<"Copy assignement operator called"<<std::endl;
    if(this == &old_obj)
        return *this;
    this->Name = old_obj.getName();
    this->HitPoints = old_obj.getHitPoints();
    this->EnergyPoints = old_obj.getEnergyPoints();
    this->AttackDamage = old_obj.getAttackDamage();
    return *this;
}

ClapTrap::ClapTrap(std::string Name): 
Name(Name),
HitPoints(10),
EnergyPoints(10),
AttackDamage(0)
{
    std::cout<<"Parametrized constructor called"<<std::endl;
    std::cout<<this->getName()<<" created"<<std::endl;
    std::cout<<"    * Energy Pointes = "<<this->getEnergyPoints()<<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->EnergyPoints > 0 && this->HitPoints > 0)
    {
        std::cout<<"ClapTrap "<<this->getName()<<" attacks "<<target<<", causing "<<this->getAttackDamage()<<" points of damage!"<<std::endl;
        this->EnergyPoints -= 1;
    }else
    {
        if(this->EnergyPoints == 0)
            std::cout<<this->getName()<<" no more energy -_-"<<std::endl;
        else if(this->HitPoints == 0)
            std::cout<<this->getName()<<" no more HP -_-"<<std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->EnergyPoints > 0 && this->HitPoints > 0)
    {
        std::cout<<this->getName()<<" repairing +"<<amount<<std::endl;
        this->EnergyPoints -= 1;
        std::cout<<" beReoaired() before this->HitPoints = "<<this->HitPoints<<std::endl;
        this->HitPoints += amount;
        std::cout<<" beReoaired() after this->HitPoints = "<<this->HitPoints<<std::endl;
    }
    else
    {
        if(this->EnergyPoints == 0)
            std::cout<<this->getName()<<" no more energy -_-"<<std::endl;
        else if(this->HitPoints == 0)
            std::cout<<this->getName()<<" dead no more HP -_-"<<std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->HitPoints > 0 && this->EnergyPoints > 0)
    {
        std::cout<<this->getName()<<" is getting damaged losing "<<amount<<"HP"<<std::endl;
        std::cout<<" takeDamege() before this->HitPoints = "<<this->HitPoints<<std::endl;
        this->HitPoints -= amount;
        std::cout<<" takeDamege() after this->HitPoints = "<<this->HitPoints<<std::endl;
    }
    else
    {
        if(this->EnergyPoints == 0)
            std::cout<<this->getName()<<" no more energy -_-"<<std::endl;
        else if(this->HitPoints == 0)
            std::cout<<this->getName()<<" dead no more HP -_-"<<std::endl;
    }
}

std::string ClapTrap::getName() const
{
    return (this->Name);
}
int ClapTrap::getHitPoints() const
{
    return (this->HitPoints);
}
int ClapTrap::getEnergyPoints() const
{
    return (this->EnergyPoints);
}
int ClapTrap::getAttackDamage() const
{
    return (this->AttackDamage);
}
