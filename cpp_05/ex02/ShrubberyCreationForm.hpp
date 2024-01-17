/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:04:40 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/15 21:31:18 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string const	_target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
         ~ShrubberyCreationForm();
        ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &copy);
        std::string	getTarget() const;
        virtual void	execute(Bureaucrat const & executor) const;
};
