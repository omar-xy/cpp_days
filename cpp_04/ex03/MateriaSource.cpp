/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:12:22 by otaraki           #+#    #+#             */
/*   Updated: 2023/12/01 14:49:42 by otaraki          ###   ########.fr       */
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
    AMateria *tmp;
    _count = copy._count;
    for (int i = 0; i < 4; i++)
    {
        tmp = copy.getInventory(i);
        if (tmp)
            _inventory[i] = tmp->clone();
        else
            _inventory[i] = NULL;
    }
}


MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        delete _inventory[i];
    }
    // std::cout << "MateriaSource deleted" << std::endl;
}



MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
    AMateria *tmp;
    
    _count = copy.getCount();
    for (int i = 0; i < 4; i++)
    {
        tmp = copy.getInventory(i);
        if (tmp)
            _inventory[i] = tmp->clone();
        else
            _inventory[i] = NULL;
    }
    return (*this);
}


AMateria            *MateriaSource::getInventory(int idx) const
{
    if (idx < 0 || idx > 3)
        return (NULL);
    return (_inventory[idx]);
}


int                 MateriaSource::getCount() const
{
    return (_count);
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (m &&  _count < 4)
    {
        // std::cout << "Materia learned" << std::endl;
        _inventory[_count] = m;
        _count++;
    }
    else
    {
        if (m)
            delete(m);
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
