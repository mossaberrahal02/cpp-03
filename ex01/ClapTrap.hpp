#pragma once
#include <iostream>
#include <string>

#define RED 31
#define GREEN 32
#define BLUE 34

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
        ClapTrap(const ClapTrap& Obj);//copy constructor
        ClapTrap& operator=(const ClapTrap& Obj);
        ClapTrap(std::string Name);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName() const ;
        int getHitPoints() const ;
        int getEnergyPoints() const ;
        int getAttackDamage() const ;

        void setName(std::string Name);
        void setHitPoints(int HitPoints);
        void setEnergyPoints(int EnergyPoints);
        void setAttackDamage(int AttackDamage);
};
void SetColor(int textColor);
void ResetColor( void );