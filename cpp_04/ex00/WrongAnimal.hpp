/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:01:07 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/23 17:01:26 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>


class WrongAnimal
{
    protected:
        std::string	_type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &copy);
        virtual ~WrongAnimal();
        WrongAnimal	&operator=(const WrongAnimal &copy);
        std::string	getType() const;
        void	makeSound() const;
};

#endif