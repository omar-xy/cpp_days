/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:57:56 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/28 23:27:05 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
    _name = "Default";
    _count = 0;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    std::cout << "Default Character created" << std::endl;
}


Character::Character(std::string const & name)
{
    _name = name;
    _count = 0;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}


Character::Character(const Character &copy)
{
    _name = copy.getName();
    _count = copy._count;
    for (int i = 0; i < 4; i++)
        _inventory[i] = copy._inventory[i];
}


Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete _inventory[i];
    std::cout << "Character " << _name << " deleted" << std::endl;
}


Character &Character::operator=(const Character &copy)
{
    _name = copy._name;
    _count = copy._count;
    for (int i = 0; i < 4; i++)
        _inventory[i] = copy._inventory[i];
    return (*this);
}


std::string const & Character::getName() const
{
    return (_name);
}


void Character::equip(AMateria* m)
{
    if (m == NULL)
        return ;
    if (_count < 4)
    {
        _inventory[_count] = m;
        _count++;
    }
    std::cout << "the Materia equiped" << std::endl;
}


void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        _inventory[idx] = NULL;
        _count--;
    }
    std::cout << "the Materia unequiped" << std::endl;
}


void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
    {
        _inventory[idx]->use(target);
        std::cout << "the Materia " << target.getName() << " used" << std::endl;
    }
    else
        return ;
}

