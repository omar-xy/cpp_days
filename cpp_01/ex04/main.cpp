/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:09:12 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/13 23:28:54 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Head.hpp"

int main(int ac, char *av[])
{
	if (ac != 4)
		std::cout << av[0] << " <filename>\t" << "<s1>  <s2>" <<	std::endl;
	else
	{
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::string filenameR;
		std::string	stream;
		std::ifstream FileIn;
		std::ofstream FileOut;
		

		FileIn.open(filename.c_str());
		if (!FileIn.good())
		{
			std::cerr << "Error: Unable to open input file." << std::endl;
			return 1;
		}
		filenameR = filename + ".replace";
		FileOut.open(filenameR.c_str());
		if (!FileOut.good())
		{
			std::cerr << "Error: Unable to open output file." << std::endl;
			FileOut.close();
			return 1;
		}
		while (std::getline(FileIn, stream))
		{
			changeTheOccurr(stream, s1, s2);
			FileOut << stream << std::endl;
		}
		FileIn.close();
		FileOut.close();
	}
}