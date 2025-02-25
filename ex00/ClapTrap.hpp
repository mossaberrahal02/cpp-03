#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string Name;
        unsigned int HitPoints;//health points
        unsigned int EnergyPoints;//energy to attack
        unsigned int AttackDamage;//his power
    public:
        ClapTrap();
        ~ClapTrap();//destructor
        ClapTrap(const ClapTrap& old_obj);//copy constructor
        ClapTrap& operator=(const ClapTrap& old_obj);
        ClapTrap(std::string Name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName() const ;
        unsigned int getHitPoints() const ;
        unsigned int getEnergyPoints() const ;
        unsigned int getAttackDamage() const ;
};