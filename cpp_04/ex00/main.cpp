/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:02:01 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/23 17:02:27 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << std::endl << "Animal:" << std::endl;
    std::cout << "Type: " << meta->getType() << std::endl;
    meta->makeSound();
    std::cout << std::endl << "Dog:" << std::endl;
    std::cout << "Type: " << j->getType() << std::endl;
    j->makeSound();
    std::cout << std::endl << "Cat:" << std::endl;
    std::cout << "Type: " << i->getType() << std::endl;
    i->makeSound();
    std::cout << std::endl << "WrongAnimal:" << std::endl;
    std::cout << "Type: " << wrong->getType() << std::endl;
    wrong->makeSound();
    std::cout << std::endl << "WrongCat:" << std::endl;
    std::cout << "Type: " << wrongCat->getType() << std::endl;
    wrongCat->makeSound();

    delete meta;
    delete j;
    delete i;
    delete wrong;
    delete wrongCat;
    return (0);
}