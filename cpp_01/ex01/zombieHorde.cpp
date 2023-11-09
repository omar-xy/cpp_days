/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:00:24 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/09 18:36:58 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *z = new Zombie[N];
	if (!z)
		return NULL;
	if (N < 0 || N >= INT_MAX)
		return NULL;
	if (name.empty())
		return NULL;
	for(int i = 0; i < N; i++)
	{
		z[i].setZombieName(name);
		z[i].announce();
	}
	return z;
}