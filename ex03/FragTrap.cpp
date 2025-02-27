#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap()
{
    SetColor(GREEN);
    print("FragTrap Default constructor called");
    ResetColor();
    std::cout<<"An anonymous ClapTrap created"<<std::endl;
    std::cout<<"    * Energy Pointes = "<<this->getEnergyPoints()<<std::endl;
    std::cout<<"    * Hit Points = "<<this->getHitPoints()<<std::endl;
    std::cout<<"    * Attack Dammage = "<<this->getAttackDamage()<<std::endl;
}

FragTrap::FragTrap( std::string Name):ClapTrap(Name)
{
    SetColor(GREEN);
    print("FragTrap Parametrized constructor called");
    ResetColor();
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout<<this->getName()<<" created"<<std::endl;
    std::cout<<"    * Energy Pointes = "<<this->getEnergyPoints()<<std::endl;
    std::cout<<"    * Hit Points = "<<this->getHitPoints()<<std::endl;
    std::cout<<"    * Attack Dammage = "<<this->getAttackDamage()<<std::endl;

}

FragTrap::FragTrap(const FragTrap& obj): ClapTrap(obj)
{
    SetColor(BLUE);
    print("FragTrap Copy constructor called");
    ResetColor();
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    SetColor(BLUE);
    print("FragTrap Copy assignement operator called");
    ResetColor();
    if(this != &obj)
        ClapTrap::operator=(obj);
    return *this;
}

FragTrap::~FragTrap()
{
    SetColor(RED);
    print("FragTrap Distructor called");
    ResetColor();
}

void FragTrap::highFivesGuys( void )
{
    print("FragTrap give me a high five");
}
