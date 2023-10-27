/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:54:34 by otaraki           #+#    #+#             */
/*   Updated: 2023/10/27 16:55:07 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iomanip>
#include "PhoneBook.hpp"
#include <iostream>


PhoneBook::PhoneBook()
{
	size = 0;
}

void	 PhoneBook::Add()
{
	static int i = 0;
	std::string str;
	std::cout << "Entre your first name :" << std::endl;
	std::getline(std::cin, str);
	while (str.empty())
	{
		std::cout << "Entre your first name :" << std::endl;
		std::getline(std::cin, str);
	}
	ArrContact[i % 8].SetFirstName(str);
	std::cout << "> Last Name:" << std::endl;
	std::getline(std::cin, str);
	while (str.empty())
	{
		std::cout << "> Last name :" << std::endl;
		std::getline(std::cin, str);
	}
	ArrContact[i % 8].SetLastName(str);
	std::cout << "> Nick name:" << std::endl;
	std::getline(std::cin, str);
	while (str.empty())
	{
		std::cout << "> Nick name :" << std::endl;
		std::getline(std::cin, str);
	}
	ArrContact[i % 8].SetNicktName(str);
	std::cout << "> Dark secret:" << std::endl;
	std::getline(std::cin, str);
	while (str.empty())
	{
		std::cout << "> Dark secret:" << std::endl;
		std::getline(std::cin, str);
	}
	ArrContact[i % 8].SetDarkSecret(str);
	std::cout << "> Phone number:" << std::endl;
	std::getline(std::cin, str);
	while (str.empty())
	{
		std::cout << "> Phone number:" << std::endl;
		std::getline(std::cin, str);
	}
	ArrContact[i % 8].SetPhoneNumber(str);
	i++;
	size += (size < 8);
}

void PhoneBook::Search()
{
    std::cout << std::setw(10) << std::right << "Index     |"
              << std::setw(10) << std::right << "First Name|"
              << std::setw(10) << std::right << "Last Name |"
              << std::setw(10) << std::right << "Nickname  |" << std::endl;

    for (unsigned int i = 0; i < size; ++i) {
    std::cout << std::setw(10) << std::right << i
	          << "|"
              << std::setw(10) << std::right << (ArrContact[i].GetFirstName().length() > 10 ? ArrContact[i].GetFirstName().substr(0, 9) + "." : ArrContact[i].GetFirstName())
              << "|"
              << std::setw(10) << std::right << (ArrContact[i].GetLastName().length() > 10 ? ArrContact[i].GetLastName().substr(0, 9) + "." : ArrContact[i].GetLastName())
              << "|"
              << std::setw(10) << std::right << (ArrContact[i].GetNicktName().length() > 10 ? ArrContact[i].GetNicktName().substr(0, 9) + "." : ArrContact[i].GetNicktName())
			  << "|"
              << std::endl;
    }

    unsigned int index;
    std::cout << "Enter the index of the contact to display: ";
    if (!(std::cin >> index) || index >= size)
	{
        std::cout << "Invalid index or input. Please enter a valid index." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return ;
    }
	std::cin.clear();
    std::cout << "Contact Information:" << std::endl;
    std::cout << "Index: " << index << std::endl;
    std::cout << "First Name: " << ArrContact[index].GetFirstName() << std::endl;
    std::cout << "Last Name: " << ArrContact[index].GetLastName() << std::endl;
    std::cout << "Nickname: " << ArrContact[index].GetNicktName() << std::endl;
}

int main()
{
	PhoneBook book;
	Contact contacts;
	std::string cmd;
	std::cout << "-->> PhoneBook <<--" << std::endl;
	while(1)
	{
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			break;
		else if (cmd.empty())
			continue;
		if (cmd == "ADD")
			book.Add();
		else if (cmd == "SEARCH")
			book.Search();
		else if (cmd == "EXIT")
			exit(0);
		else
			std::cout << "Invalid cmd! Try ADD, SEARCH commands.." << std::endl;
		std::cin.clear();
	}
}
