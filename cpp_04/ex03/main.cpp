/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:24:23 by otaraki           #+#    #+#             */
/*   Updated: 2023/12/01 15:02:04 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("bob");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->use(0, *me);
    me->use(1, *me);
    me->unequip(0);
    me->unequip(1);

    ICharacter* john = new Character("John");
    tmp = src->createMateria("ice");
    john->equip(tmp);
    tmp = src->createMateria("cure");
    john->equip(tmp);
    john->use(0, *john);
    john->use(1, *john);
    john->unequip(0);
    john->unequip(1);
    delete src;
    delete john;
    delete me;
}