/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:31:27 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/15 21:21:45 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>


class Bureaucrat;

class AForm
{
    private:
        std::string const	_name;
        bool				_signed;
        int const			_gradeToSign;
        int const			_gradeToExecute;
    public:
        AForm();
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        AForm(const AForm &copy);
        virtual ~AForm();
        AForm	&operator=(const AForm &copy);
        std::string	getName() const;
        bool		getSigned() const;
        int			getGradeToSign() const;
        int			getGradeToExecute() const;
        void		beSigned(const Bureaucrat &bureaucrat);
        void        sginForm(const Bureaucrat &bureaucrat) const;
        virtual void	execute(Bureaucrat const & executor) const = 0;
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class NotSignedException : public std::exception
        {
            virtual const char* what() const throw();
        };
};

std::ostream	&operator<<(std::ostream &out, const AForm &form);

