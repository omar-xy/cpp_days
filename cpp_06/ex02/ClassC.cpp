/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassC.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:41:17 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/08 22:41:26 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassC.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"


ClassC::~ClassC()
{
}


Base *ClassC::generate(void)
{
    return (new ClassC);
}



void ClassC::identify(Base *p)
{
    if (dynamic_cast<ClassA *>(p) != NULL)
        std::cout << "ClassA" << std::endl;
    else if (dynamic_cast<ClassB *>(p) != NULL)
        std::cout << "ClassB" << std::endl;
    else if (dynamic_cast<ClassC *>(p) != NULL)
        std::cout << "ClassC" << std::endl;
}