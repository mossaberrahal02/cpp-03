#pragma once
#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
private:
public:
    ScavTrap( void );
    ScavTrap(std::string Name);
    ~ScavTrap( void );
    ScavTrap(ScavTrap& Obj);
    ScavTrap& operator=(ScavTrap& Obj);
};