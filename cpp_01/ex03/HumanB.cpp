/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:59:27 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/09 21:30:14 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string _name)
{
	this->name = _name;
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::attack()
{
	if (!this->type)
		return ;
	std::cout << this->name << " attack with their ";
	std::cout << (this->type)->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &_type)
{
	this->type = &_type;
}