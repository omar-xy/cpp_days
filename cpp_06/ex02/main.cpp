/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:41:35 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/09 18:16:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <ctime>

Base *generate(void)
{
    srand(static_cast<unsigned>(time(0)));
    Base* p[] = {new ClassA(), new ClassB(), new ClassC()};
    int index = rand() % 3;
    delete p[(index + 1) % 3];
    delete p[(index + 2) % 3];
    return p[index];
}

void identify(Base *p)
{
    if (dynamic_cast<ClassA *>(p) != NULL)
        std::cout << "ClassA" << std::endl;
    else if (dynamic_cast<ClassB *>(p) != NULL)
        std::cout << "ClassB" << std::endl;
    else if (dynamic_cast<ClassC *>(p) != NULL)
        std::cout << "ClassC" << std::endl;
}

// void identify(Base &p)
// {
//     if (dynamic_cast<ClassA *>(&p) != NULL)
//         std::cout << "ClassA" << std::endl;
//     else if (dynamic_cast<ClassB *>(&p) != NULL)
//         std::cout << "ClassB" << std::endl;
//     else if (dynamic_cast<ClassC *>(&p) != NULL)
//         std::cout << "ClassC" << std::endl;
// }

int main()
{
    Base *base = generate();
    identify(base);
    delete base;
    return (0);
}