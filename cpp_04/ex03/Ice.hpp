/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:30:03 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/29 22:25:36 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria 
{

    public: 
        Ice ();
        Ice (const Ice  &copy);
        ~Ice ();
        Ice  &operator=(const Ice  &copy);

        std::string const & getType() const;
        Ice * clone() const;
        void use(ICharacter &target);
};
