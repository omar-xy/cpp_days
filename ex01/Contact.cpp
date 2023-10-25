/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:55:41 by otaraki           #+#    #+#             */
/*   Updated: 2023/10/24 20:20:08 by otaraki          ###   ########.fr       */
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

int	Contact::GetIndex()
{
	return (Index);
}

// set value to the contact:

void	Contact::SetIndex(int index)
{
	Index = index;
}

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
void		Contact::SetDarkSecret(std::string value)
{
	DarkestSecret = value;
}