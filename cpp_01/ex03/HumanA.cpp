/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:59:31 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/09 21:08:05 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(const std::string _name, Weapon &_type) : type(_type)
{
	this->name = _name;
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack()
{
	std::cout << this->name << " attack with their ";
	std::cout << this->type.getType() << std::endl;
}
