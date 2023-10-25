/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:41:48 by otaraki           #+#    #+#             */
/*   Updated: 2023/09/22 21:21:38 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac , char **av)
{
	if (ac >= 2)
	{
		for(int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
				std::cout<<(char)std::toupper(av[i][j]);
			if (av[i + 1])
				std::cout<<" ";
		}
	}
}