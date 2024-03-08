/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:26:00 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/08 22:43:32 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"


ClassA::~ClassA()
{
}


Base *ClassA::generate(void)
{
    for(int i = 0; i < 3; i++)
    {
        
    }
}

void ClassA::identify(Base *p)
{
    if (dynamic_cast<ClassA *>(p) != NULL)
        std::cout << "ClassA" << std::endl;
    else if (dynamic_cast<ClassB *>(p) != NULL)
        std::cout << "ClassB" << std::endl;
    else if (dynamic_cast<ClassC *>(p) != NULL)
        std::cout << "ClassC" << std::endl;
}

// void ClassA::identify(Base &p)
// {
//     if (dynamic_cast<ClassA *>(&p) != NULL)
//         std::cout << "ClassA" << std::endl;
//     else if (dynamic_cast<ClassB *>(&p) != NULL)
//         std::cout << "ClassB" << std::endl;
//     else if (dynamic_cast<ClassC *>(&p) != NULL)
//         std::cout << "ClassC" << std::endl;
// }