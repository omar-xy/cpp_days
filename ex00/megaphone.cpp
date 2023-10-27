/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:41:48 by otaraki           #+#    #+#             */
/*   Updated: 2023/10/27 16:19:40 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac , char **av)
{
	std::string a;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	else if (ac >= 2)
	{
		for(int i = 1; i < ac; i++)
		{
			a = av[i];
			for (int j = 0; av[i][j]; j++)
				std::cout<<(char)std::toupper(a[j]);
		}
	}
}