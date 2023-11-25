/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:36:04 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/24 16:40:12 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>


class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(const Brain &copy);
        virtual ~Brain();
        Brain	&operator=(const Brain &copy);
        std::string *getIdeas();
        void	setIdeas(std::string ideas);
};

#endif