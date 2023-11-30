/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:57:56 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/30 03:06:15 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
    _name = "Default";
    _count = 0;
    for (int i = 0; i < 4; i++)
    {
        _inventory[i] = NULL;
        _token[i] = NULL;
    }
    // std::cout << "Default default constructor called" << std::endl;
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
    AMateria *tmp;
    _name = copy.getName();
    _count = copy.getCount();
    for (int i = 0; i < 4; i++)
    {
        tmp = copy.getInventory(i);
        if (tmp)
            _inventory[i] = tmp->clone();
        else
            _inventory[i] = NULL;
    }
}


Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete _inventory[i];
    }
}


Character &Character::operator=(const Character &copy)
{
    AMateria *tmp;

    _name = copy.getName();
    _count = copy.getCount();
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != NULL)
            delete _inventory[i];
        tmp = copy.getInventory(i);
        if (tmp)
            _inventory[i] = tmp->clone();
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return (_name);
}

int Character::getCount() const
{
    return (_count);
}

AMateria *Character::getInventory(int idx) const
{
    if (idx < 0 || idx > 3)
        return (NULL);
    return (_inventory[idx]);
}

void Character::equip(AMateria* m)
{
    if (m == NULL)
        return ;
    if (_count < 4)
    {
        // std::cout << "the Materia equiped" << std::endl;
        _inventory[_count] = m;
        _count++;
    }
    else
        return ;
}


void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        _inventory[idx] = NULL;
        _count--;
    }
    // std::cout << "the Materia unequiped" << std::endl;
}


void  Character::drop_materia(int idx)
{
    _token[idx] = _inventory[idx];
    delete _token[idx];
    _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
    {
        _inventory[idx]->use(target);
        // std::cout << "the Materia " << target.getName() << " used" << std::endl;
    }
    else
        return ;
}
