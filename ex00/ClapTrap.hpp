#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string Name;
        int HitPoints;//health points
        int EnergyPoints;//energy to attack
        int AttackDamage;//his power
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
        int getHitPoints() const ;
        int getEnergyPoints() const ;
        int getAttackDamage() const ;
};