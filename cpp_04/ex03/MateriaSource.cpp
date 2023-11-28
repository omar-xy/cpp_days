/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:12:22 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/28 23:17:35 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
    
    _count = 0;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}


MateriaSource::MateriaSource(const MateriaSource &copy)
{
    _count = copy._count;
    for (int i = 0; i < 4; i++)
        _inventory[i] = copy._inventory[i];
}


MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] != NULL)
            delete _inventory[i];
    }
}



MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
    _count = copy._count;
    for (int i = 0; i < 4; i++)
        _inventory[i] = copy._inventory[i];
    return (*this);
}


void MateriaSource::learnMateria(AMateria* m)
{
    if (_count < 4)
    {
        _inventory[_count] = m;
        _count++;
    }
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] && _inventory[i]->getType() == type)
            return (_inventory[i]->clone());
    }
    return (NULL);
}



