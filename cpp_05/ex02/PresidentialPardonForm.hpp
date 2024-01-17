/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:53:54 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/17 04:16:39 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string const	_target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
         ~PresidentialPardonForm();
        PresidentialPardonForm	&operator=(const PresidentialPardonForm &copy);
        std::string	getTarget() const; 
        void	execute(Bureaucrat const & executor) const;
};