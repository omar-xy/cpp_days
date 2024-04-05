/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:20:32 by otaraki           #+#    #+#             */
/*   Updated: 2024/04/04 22:03:50 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Iter.hpp"
#include <iostream>


class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print );
  iter( tab2, 5, print<const Awesome>);

  return 0;
}
// void print_multiplied_by_10(int const & x ) 
// {    
//     int x_ = x * 10;
//     std::cout << x_ << std::endl;
// }

// void print_string_lower_case(std::string const & x ) 
// {
//     std::string x_ = x;
//     for (size_t i = 0; i < x_.length(); i++)
//         x_[i] = std::tolower(x_[i]);
//     std::cout << x_ << std::endl;
// }

// int main() 
// {
//     int tab[] = {0, 1, 2, 3, 4};
//     iter(tab, 5, print_multiplied_by_10);
//     std::string  tab2[] = {"ABRAGADAPRA", "ABCD", "OLA", "HEHO", "LOOL"};
//     iter(tab2, 5, print_string_lower_case);
//     return 0;
// }