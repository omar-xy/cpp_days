/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:05:03 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/22 12:21:41 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    
}


ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->Hit_pts = 100;
    this->energy_pts = 50;
    this->attack_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& value)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &value)
    {
        this->name = value.getName();
        this->Hit_pts = value.getHitpts();
        this->energy_pts = value.getEnergy();
        this->attack_dmg = value.getAttackDmg();
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << getName() <<" have enterred in Gate keeper mode" << std::endl;
}