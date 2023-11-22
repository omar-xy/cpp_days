/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:04:37 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/22 16:49:57 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

int main()
{
    // ClapTrap a("holla");
    ScavTrap b("Boris");
    ScavTrap c("Alyona");

    // a.attack("Boris");
    b.attack("Alyona");
    b.attack("Alyona");
    c.attack("Boris");
    c.attack("Boris");
    // c.attack("Alyona");
    
    return 0;
}