/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:59:58 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/28 18:23:01 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
// Include the necessary header file for std::string

// Include the necessary header file for the AMateria class
#include "AMateria.hpp"

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};
