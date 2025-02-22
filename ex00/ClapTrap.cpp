#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :Name(""), EnergyPoints(10), AttackDamage(10)
{
    std::cout<<"Default constructor called"<<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"destructor called"<<std::endl;    
}

ClapTrap::ClapTrap(const ClapTrap& old_obj)
{
    std::cout<<"Copy constructor called"<<std::endl;
    this->Name = old_obj.Name;
    this->HitPoints = old_obj.HitPoints;
    this->EnergyPoints = old_obj.EnergyPoints;
    this->AttackDamage = old_obj.AttackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& old_obj)
{
    std::cout<<"Copy assignement operator called"<<std::endl;
    this->Name = old_obj.Name;
    this->HitPoints = old_obj.HitPoints;
    this->EnergyPoints = old_obj.EnergyPoints;
    this->AttackDamage = old_obj.AttackDamage;
    return *this;
}

ClapTrap::ClapTrap(std::string Name): 
Name(Name),
HitPoints(10),
EnergyPoints(10),
AttackDamage(10)
{
    // this->HitPoints = 10;
    // this->EnergyPoints = 10;
    // this->AttackDamage = 10;
    // this->Name = Name;
    std::cout<<"Parametrized constructor called"<<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout<<"ClapTrap "<<this->Name<<" attacks "<<target<<", causing "<<this->AttackDamage<<" points of damage!"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout<<"repairing +"<<amount<<std::endl;
    this->EnergyPoints += amount;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout<<"taking damage "<<amount<<std::endl;
    this->AttackDamage += amount;
}