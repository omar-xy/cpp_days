/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:24:41 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/29 22:25:15 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &copy);
        virtual ~AMateria();
        AMateria &operator=(const AMateria &copy);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter &target);
};
