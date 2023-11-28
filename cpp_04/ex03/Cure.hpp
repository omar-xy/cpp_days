/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:33:31 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/28 22:23:37 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria 
{

    public: 
        Cure ();
        Cure (std::string const & type);
        Cure (const Cure  &copy);
         ~Cure ();
        Cure  &operator=(const Cure  &copy);

        std::string const & getType() const; // Returns the materia type
        Cure * clone() const;
        void use(ICharacter &target);
};
