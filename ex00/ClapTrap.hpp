#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string Name;
        unsigned int HitPoints;
        unsigned int EnergyPoints;
        unsigned int AttackDamage;
    public:
        ClapTrap();
        ~ClapTrap();//destructor
        ClapTrap(const ClapTrap& old_obj);//copy constructor
        ClapTrap& operator=(const ClapTrap& old_obj);
        ClapTrap(std::string Name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};