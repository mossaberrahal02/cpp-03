#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap()
{
    SetColor(GREEN);
    print("FragTrap Default constructor called");
    ResetColor();
}

FragTrap::FragTrap( std::string Name):ClapTrap(Name)
{
    SetColor(GREEN);
    print("FragTrap Parametrized constructor called");
    ResetColor();
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
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
