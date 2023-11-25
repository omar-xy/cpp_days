/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:02:01 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/25 15:42:55 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* po = new Animal();
    const Animal* lo = new Dog();
    const Animal* ko = new Cat();

    std::cout << std::endl << "Animal:" << std::endl;
    std::cout << "Type: " << po->getType() << std::endl;
    po->makeSound();
    std::cout << std::endl << "Dog:" << std::endl;
    std::cout << "Type: " << lo->getType() << std::endl;
    lo->makeSound();
    std::cout << std::endl << "Cat:" << std::endl;
    std::cout << "Type: " << ko->getType() << std::endl;
    ko->makeSound();

    std::cout << std::endl << "Delete:" << std::endl;
    delete lo;
    delete ko;
    delete po;


}