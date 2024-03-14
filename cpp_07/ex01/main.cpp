/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:20:32 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/14 16:31:29 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Iter.hpp"
#include <iostream>

void print_multiplied_by_10(int const & x ) 
{    
    int x_  =  x * 10;
    std::cout << x_ << std::endl;
    return; 
}

void print_string_lower_case(std::string const & x ) 
{
    std::string x_ = x;
    for (size_t i = 0; i < x_.length(); i++)
        x_[i] = std::tolower(x_[i]);
    std::cout << x_ << std::endl;
}

int main() 
{
    int tab[] = { 0, 1, 2, 3, 4 };
    ::iter( tab, 5, print_multiplied_by_10 );
    std::string  tab2[] = { "ABRAGADAPRA", "ABCD", "OLA", "HEHO", "LOOL" };
    ::iter( tab2, 5, print_string_lower_case );
    return 0;
}