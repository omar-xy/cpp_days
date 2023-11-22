/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:04:37 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/22 20:18:48 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int main()
{
    FragTrap b("Boris");
    
    b.attack("HH");
    b.takeDamage(100);
    b.beRepaired(100);
    b.attack("lool");
    b.takeDamage(100);
    b.attack("lool");
    b.highFivesGuys();
    return 0;
}