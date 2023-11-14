/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:59:24 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/14 02:13:39 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl *ptr = NULL;

	ptr->complain("lol");
	ptr->complain("info");
	ptr->complain("error");
	ptr->complain("warning");
	ptr->complain("lol");
	ptr->complain("lol");
	ptr->complain("debug");
}