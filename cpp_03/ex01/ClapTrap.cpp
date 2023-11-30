/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:03:28 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/23 13:40:45 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), Hit_pts(10), energy_pts(10), attack_dmg(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string _name)
{
        std::cout << "ClapTrap "<< _name << " constructor called" << std::endl;
        this->name = _name;
        this->Hit_pts = 10;
        this->energy_pts = 10;
        this->attack_dmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& value)
{
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    if (this != &value)
    {
        this->name = value.getName();
        this->Hit_pts = value.getHitpts();
        this->energy_pts = value.getEnergy();
        this->attack_dmg = value.getAttackDmg();
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
      std::cout << "ClapTrap Destructor called" << std::endl;
}

std::string ClapTrap::getName() const
{
    return this->name;
}

int ClapTrap::getHitpts() const
{
    return this->Hit_pts;
}

int ClapTrap::getEnergy() const
{
    return this->energy_pts;
}

int ClapTrap::getAttackDmg() const
{
    return this->attack_dmg;
}

void ClapTrap::attack(const std::string& target)
{
    if (!energy_pts || !Hit_pts)
    {
        std::cout << "ClapTrap " << name << " can't attack because he is dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_dmg;
    std::cout << "points of damage!" << std::endl;
   energy_pts -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (!energy_pts || !Hit_pts)
    {
        std::cout << "ClapTrap " << this->name << " can't take damage because he is dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
    Hit_pts -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!energy_pts || !Hit_pts)
    {
        std::cout << "ClapTrap " << this->name << " can't be repaired because he has no energy points left" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
    Hit_pts += amount;
    energy_pts -= 1;
}
