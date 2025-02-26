#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
Name(""),
HitPoints(10),
EnergyPoints(10),
AttackDamage(0)
{
    SetColor(GREEN);
    std::cout<<"ClapTrap Default constructor called"<<std::endl;
    ResetColor();
    std::cout<<"An anonymous ClapTrap created"<<std::endl;
    std::cout<<"    * Energy Pointes = "<<this->getEnergyPoints()<<std::endl;
}

ClapTrap::~ClapTrap()
{
    SetColor(RED);
    std::cout<<"ClapTrap destructor called"<<std::endl; 
    ResetColor();
}

ClapTrap::ClapTrap(const ClapTrap& Obj)
{
    SetColor(BLUE);
    std::cout<<"ClapTrap Copy constructor called"<<std::endl;
    ResetColor();
    this->Name = Obj.getName();
    this->HitPoints = Obj.getHitPoints();
    this->EnergyPoints = Obj.getEnergyPoints();
    this->AttackDamage = Obj.getAttackDamage();
}

ClapTrap& ClapTrap::operator=(const ClapTrap& Obj)
{
    SetColor(BLUE);
    std::cout<<"ClapTrap Copy assignement operator called"<<std::endl;
    ResetColor();
    if(this != &Obj)
    {
        this->Name = Obj.getName();
        this->HitPoints = Obj.getHitPoints();
        this->EnergyPoints = Obj.getEnergyPoints();
        this->AttackDamage = Obj.getAttackDamage();
    }
    return *this;
}

ClapTrap::ClapTrap(std::string Name): 
Name(Name),
HitPoints(10),
EnergyPoints(10),
AttackDamage(0)
{
    SetColor(GREEN);
    std::cout<<"ClapTrap Parametrized constructor called"<<std::endl;
    ResetColor();
    std::cout<<this->getName()<<" created"<<std::endl;
    std::cout<<"    * Energy Pointes = "<<this->getEnergyPoints()<<std::endl;
}

void ClapTrap::attack(const std::string& Target)
{
    if(this->EnergyPoints > 0 && this->HitPoints > 0)
    {
        std::cout<<"ClapTrap "<<this->getName()<<" attacks "<<Target<<", causing "<<this->getAttackDamage()<<" points of damage!"<<std::endl;
        this->EnergyPoints -= 1;
    }else
    {
        if(this->EnergyPoints == 0)
            std::cout<<this->getName()<<" no more energy -_-"<<std::endl;
        else if(this->HitPoints == 0)
            std::cout<<this->getName()<<" no more HP -_-"<<std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int Amount)
{
    if(this->EnergyPoints > 0 && this->HitPoints > 0)
    {
        std::cout<<this->getName()<<" repairing +"<<Amount<<std::endl;
        this->EnergyPoints -= 1;
        this->HitPoints += Amount;
    }
    else
    {
        if(this->EnergyPoints == 0)
            std::cout<<this->getName()<<" no more energy -_-"<<std::endl;
        else if(this->HitPoints == 0)
            std::cout<<this->getName()<<" dead no more HP -_-"<<std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int Amount)
{
    if(this->HitPoints > 0 && this->EnergyPoints > 0)
    {
        std::cout<<this->getName()<<" is getting damaged losing "<<Amount<<"HP"<<std::endl;
        this->HitPoints -= Amount;
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

void ClapTrap::setHitPoints(int HitPoints)
{
    this->HitPoints = HitPoints;
}
void ClapTrap::setEnergyPoints(int EnergyPoints)
{
    this->EnergyPoints = EnergyPoints;
}
void ClapTrap::setAttackDamage(int AttackDamage)
{
    this->AttackDamage = AttackDamage;
}
void ClapTrap::setName(std::string Name)
{
    this->Name = Name;
}

void SetColor(int textColor)
{
    std::cout << "\033[" << textColor << "m";
}
void ResetColor() 
{
    std::cout << "\033[0m";
}