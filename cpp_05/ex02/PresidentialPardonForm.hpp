/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:53:54 by otaraki           #+#    #+#             */
/*   Updated: 2024/02/29 11:41:26 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string	_target;
    public:
    // constructors && destructors
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
         ~PresidentialPardonForm();
        PresidentialPardonForm	&operator=(const PresidentialPardonForm &copy);

    // getter
        std::string	getTarget() const;
        
    // member function
        void	execute(Bureaucrat const & executor) const;
};