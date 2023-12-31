/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:11:14 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/14 01:30:23 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Head.hpp"

void	changeTheOccurr(std::string& stream, std::string& s1, std::string& s2)
{
	size_t index = 0;
	while((index = stream.find(s1, index)) != std::string::npos)
	{
		stream = stream.substr(0, index) + s2 + stream.substr(index + s1.length());
		index += s2.length();
	}
}
