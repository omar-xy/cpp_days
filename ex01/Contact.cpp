/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:55:41 by otaraki           #+#    #+#             */
/*   Updated: 2023/10/27 16:51:54 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// get value from the contact:

std::string	Contact::GetFirstName()
{
	return (FirstName);
}

std::string	Contact::GetLastName()
{
	return (LastName);
}

std::string	Contact::GetNicktName()
{
	return (NickName);
}

std::string	Contact::GetPhoneNumber()
{
	return (PhoneNumber);
}

std::string	Contact::GetDarkSecret()
{
	return (DarkestSecret);
}

// set value to the contact:

void		Contact::SetFirstName(std::string value)
{
	FirstName = value;
}
void		Contact::SetLastName(std::string value)
{
	LastName = value;
}
void		Contact::SetNicktName(std::string value)
{
	NickName = value;
}
void		Contact::SetPhoneNumber(std::string value)
{
	PhoneNumber = value;
}
void		Contact::SetDarkSecret(std::string value)
{
	DarkestSecret = value;
}