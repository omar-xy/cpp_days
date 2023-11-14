/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:57:00 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/14 00:09:24 by otaraki          ###   ########.fr       */
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
	std::cout << " I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger.";
	std::cout << " I really do!" << std::endl;
}
void Harl::info(void)
{		
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn't be asking for more!" << std::endl;	
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working ";
	std::cout << "here since last month."<< std::endl; 
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now " << std::endl;		
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
		std::cout << ">> NO LEVEL MATCING!!!! <<" << std::endl;
}
