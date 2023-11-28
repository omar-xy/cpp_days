/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:24:23 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/28 23:24:16 by otaraki          ###   ########.fr       */
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
    src->learnMateria(NULL);
    src->learnMateria(NULL);

    
    ICharacter* me = new Character("me");
    AMateria* tmp;
    std::cout << "------------------" << std::endl;
    tmp = src->createMateria("ice");
    std::cout << "------------------" << std::endl;
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(3, *bob);
    delete bob;
    delete me;
    delete src;
}