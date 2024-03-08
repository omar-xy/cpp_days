/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:41:01 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/08 22:41:15 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassB.hpp"
#include "ClassA.hpp"
#include "ClassC.hpp"
ClassB::~ClassB()
{
}

Base *ClassB::generate(void)
{
    return (new ClassB);
}


void ClassB::identify(Base *p)
{
    if (dynamic_cast<ClassA *>(p) != NULL)
        std::cout << "ClassA" << std::endl;
    else if (dynamic_cast<ClassB *>(p) != NULL)
        std::cout << "ClassB" << std::endl;
    else if (dynamic_cast<ClassC *>(p) != NULL)
        std::cout << "ClassC" << std::endl;
}

