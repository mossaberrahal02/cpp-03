#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
private:
public:
    ScavTrap( void );
    ScavTrap(std::string Name);
    ~ScavTrap( void );
    ScavTrap(const ScavTrap& Obj);
    ScavTrap& operator=(const ScavTrap& Obj);
    void guardGate();
    void attack(const std::string& Target);
};
