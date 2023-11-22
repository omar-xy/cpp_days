/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:05:03 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/22 19:31:05 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}


ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
    this->Hit_pts = 100;
    this->energy_pts = 50;
    this->attack_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& value)
{
    if (this != &value)
    {
        ClapTrap::operator=(value);
        std::cout << "ScavTrap assignation operator called" << std::endl;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
    if (!energy_pts || !Hit_pts)
    {
        std::cout << "ScavTrap " << name << " can't attack anymore" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_dmg;
    std::cout << "points of damage!" << std::endl;
    energy_pts -= 1;
}

void ScavTrap::guardGate()
{
    std::cout << this->name <<" have enterred in Gate keeper mode" << std::endl;
}