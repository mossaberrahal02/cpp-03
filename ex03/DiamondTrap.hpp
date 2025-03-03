#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:  FragTrap, ScavTrap
{
private:
std::string Name;

public:
    DiamondTrap();
    DiamondTrap(std::string Name);
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap& obj);
    DiamondTrap& operator=(const DiamondTrap& obj);

    std::string getName();
    void setName(std::string Name);
    void whoAmI();
};
