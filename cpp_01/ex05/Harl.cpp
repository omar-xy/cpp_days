/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:57:00 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/12 22:32:51 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return ;
}
Harl::~Harl()
{
	return ;
}


void Harl::debug(void)
{
		std::cout << "ERROR: " << std::endl;	
}
void Harl::info(void)
{
		std::cout << "info " << std::endl;	
}

void Harl::warning(void)
{
		std::cout << "ERROR: " << std::endl;	
}

void Harl::error(void)
{
	std::cout << "ERROR: " << std::endl;		
}

void Harl::complain( std::string level )
		{
			std::string tab [4] = {"debug", "info", "warning", "error"};
			void (Harl::*H[4]) (void)= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
			int i;
			for (i = 0; i < 4; i++)
			{
				if (tab[i] == level)
				{
					(this->*H[i])();
					break ;
				}
			}
			if (i == 4)
				std::cout << "no level matching" << std::endl;
		}
