#pragma once
#include "ClapTrap.hpp"
class FragTrap : ClapTrap
{
private:
public:
    FragTrap( void );
    FragTrap(std::string Name);
    FragTrap(const FragTrap& obj);
    FragTrap& operator=(const FragTrap& obj);
    ~FragTrap();
    void highFivesGuys( void );
};