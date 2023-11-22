/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:06:31 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/22 19:45:10 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string _name);
        FragTrap(const FragTrap& copy);
        FragTrap& operator=(const FragTrap& value);
        ~FragTrap();
        void attack(const std::string& target); // Override the attack function
        void highFivesGuys(); // New member function for FragTrap
};

#endif