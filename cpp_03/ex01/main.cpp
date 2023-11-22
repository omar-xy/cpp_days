/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:04:37 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/21 21:42:33 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("holla");
    ClapTrap b("Boris");
    ClapTrap c(b);

    a.attack("Boris");
    b.attack("Alyona");
    c.attack("Alyona");
    return 0;
}