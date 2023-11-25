/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interface.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:24:41 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/25 17:32:16 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACE_HPP
# define INTERFACE_HPP

#include <iostream>

class Amateria
{
    protected:
        std::string _type;
    public:
        Amateria();
        Amateria(std::string const & type);
        Amateria(const Amateria &copy);
        virtual ~Amateria();
        Amateria &operator=(const Amateria &copy);

        
        std::string const & getType() const; // Returns the materia type
        virtual Amateria* clone() const = 0;
        virtual void use(ICharacter &target);
    
};


#endif
