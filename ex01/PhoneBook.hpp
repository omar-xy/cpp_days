/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:56:14 by otaraki           #+#    #+#             */
/*   Updated: 2023/10/27 16:03:16 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONE_HPP
#define PHONE_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		unsigned int size;
	public:
		Contact ArrContact[8];
		PhoneBook();
		void Add();
		void Search();
};

#endif
