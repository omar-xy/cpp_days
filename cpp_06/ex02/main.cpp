/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:41:35 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/13 21:32:08 by otaraki          ###   ########.fr       */
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

void identify(Base &p)
{
    try
    {
        ClassA &a = dynamic_cast<ClassA &>(p);
        (void)a; 
        std::cout << "ClassA"  << std::endl;
    }
    catch (std::exception &e)
    {
        try{
            ClassB &b = dynamic_cast<ClassB &>(p);
            (void)b;
            std::cout << "ClassB"  << std::endl;
        }
        catch (std::exception &e)
        {
            try{
                ClassC &c = dynamic_cast<ClassC &>(p);
                (void)c;
                std::cout << "ClassC"  << std::endl;
            }
            catch (std::exception &e)
            {
                std::cout << "C";
                std::cout << e.what() << std::endl;
            }
            std::cout << "B";
            std::cout << e.what() << std::endl;
        }
        std::cout << "A";
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    Base *base = generate();
    identify(*base);
    delete base;
    return (0);
}