#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(),  FragTrap(), ScavTrap()
{
    SetColor(GREEN);
    print("DiamondTrap Default constructor called");
    ResetColor();
    std::cout<<"An anonymous ClapTrap created"<<std::endl;
    std::cout<<"    * Energy Pointes = "<<this->getEnergyPoints()<<std::endl;
    std::cout<<"    * Hit Points = "<<this->getHitPoints()<<std::endl;
    std::cout<<"    * Attack Dammage = "<<this->getAttackDamage()<<std::endl;
}

DiamondTrap::DiamondTrap(std::string Name):ClapTrap(Name), FragTrap(Name), ScavTrap(Name)
{
    this->Name = Name;
    SetColor(GREEN);
    std::cout<<"DiamondTrap Parametrized constructor called"<<std::endl;
    ResetColor();
    std::cout<<this->getName()<<" created"<<std::endl;
    std::cout<<"    * Energy Pointes = "<<this->getEnergyPoints()<<std::endl;
    std::cout<<"    * Hit Points = "<<this->getHitPoints()<<std::endl;
    std::cout<<"    * Attack Dammage = "<<this->getAttackDamage()<<std::endl;
}

DiamondTrap::~DiamondTrap()
{   
    SetColor(RED);
    print("DiamondTrap Distructor called");
    ResetColor();
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj): ClapTrap(obj),  FragTrap(obj), ScavTrap(obj)
{
    SetColor(BLUE);
    print("DiamondTrap Copy constructor called");
    ResetColor();
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
    SetColor(BLUE);
    print("DiamondTrap Copy assignement operator called");
    ResetColor();
    if(this != &obj)
    {
        ClapTrap::operator=(obj);
        ScavTrap::operator=(obj);
        FragTrap::operator=(obj);
    }
    return *this;
}

std::string DiamondTrap::getName()
{
    return (this->Name);
}

void DiamondTrap::setName(std::string Name)
{
    this->Name = Name;
}
