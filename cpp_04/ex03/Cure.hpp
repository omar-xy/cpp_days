/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:33:31 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/29 22:25:31 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria 
{
    public: 
        Cure ();
        Cure (const Cure  &copy);
        ~Cure ();
        Cure  &operator=(const Cure  &copy);
        std::string const & getType() const;
        Cure * clone() const;
        void use(ICharacter &target);
};
