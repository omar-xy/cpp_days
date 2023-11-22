/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:06:35 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/22 20:18:13 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
        std::cout << "FragTrap " << _name << " constructor called" << std::endl;
        this->name = _name;
        this->Hit_pts = 100;
        this->energy_pts = 100;
        this->attack_dmg = 30;
}

FragTrap::FragTrap(const FragTrap& copy)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& value)
{
    std::cout << "FragTrap Assignation operator called" << std::endl;
    if (this != &value)
    {
        this->name = value.getName();
        this->Hit_pts = value.getHitpts();
        this->energy_pts = value.getEnergy();
        this->attack_dmg = value.getAttackDmg();
    }
    return *this;
}

FragTrap::~FragTrap()
{
      std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (!energy_pts || !Hit_pts)
    {
        std::cout << "FragTrap " << name << " can't attack anymore" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attack_dmg;
    std::cout << "points of damage!" << std::endl;
    energy_pts -= 1;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " wants to high five" << std::endl;
}