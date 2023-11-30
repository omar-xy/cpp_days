/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:56:26 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/29 18:25:20 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(const Cat &copy);
        ~Cat();
        Cat	&operator=(const Cat &copy);
        void	makeSound() const;
        Brain *getBrain()const;
        void setType(std::string type);
};

#endif