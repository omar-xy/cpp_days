/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:04:54 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/30 02:58:53 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria *_inventory[4];
        int _count;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &copy);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &copy);
        AMateria            *getInventory(int idx) const;
        int                 getCount() const;
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};
