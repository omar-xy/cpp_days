/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:56:14 by otaraki           #+#    #+#             */
/*   Updated: 2023/10/25 15:11:02 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONE_HPP
#define PHONE_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(){};
		Contact ArrContact[8];
		void Add();
		void display(){
			std::cout << ArrContact[0].GetFirstName() << std::endl;
			std::cout << ArrContact[0].GetLastName()	 << std::endl;
			}
		void Search();
		// void Exit();
};

#endif
