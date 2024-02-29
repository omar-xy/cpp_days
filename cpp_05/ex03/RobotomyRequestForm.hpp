/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:07:24 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/15 19:08:30 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"



class RobotomyRequestForm : public AForm
{
    private:
        std::string const	_target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
         ~RobotomyRequestForm();
        RobotomyRequestForm	&operator=(const RobotomyRequestForm &copy);
        std::string	getTarget() const;
        void	execute(Bureaucrat const & executor) const;
};

