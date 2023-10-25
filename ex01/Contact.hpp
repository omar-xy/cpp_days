/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:56:03 by otaraki           #+#    #+#             */
/*   Updated: 2023/10/25 14:01:43 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string DarkestSecret;
		std::string PhoneNumber;
		int			Index;
	public:
		Contact(){};
		std::string	GetFirstName();
		std::string	GetLastName();
		std::string	GetNicktName();
		std::string	GetDarkSecret();
		std::string	GetPhoneNumber();
		int			GetIndex();
		void		SetFirstName(std::string value);
		void		SetLastName(std::string value);
		void		SetNicktName(std::string value);
		void		SetDarkSecret(std::string value);
		void		SetPhoneNumber(std::string value);
		void		SetIndex(int index);
};

#endif