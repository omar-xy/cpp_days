/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:14:44 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/29 22:25:20 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *_inventory[4];
        AMateria *_token[4];
        int _count;
    
    public:
        Character();
        Character(std::string const &name);
        Character(const Character &copy);
        ~Character();
        Character &operator=(const Character &copy);
        std::string const &getName() const;
        int                 getCount() const;
        AMateria            *getInventory(int idx) const;
        void equip(AMateria *m);
        void unequip(int idx);
        void  drop_materia(int idx);
        void use(int idx, ICharacter &target);
};
