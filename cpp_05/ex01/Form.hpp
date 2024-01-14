/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:31:27 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/14 14:13:40 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>


class Form
{
    private:
        std::string const	_name;
        bool				_signed;
        int const			_gradeToSign;
        int const			_gradeToExecute;
    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(const Form &copy);
        virtual ~Form();
        Form	&operator=(const Form &copy);
        std::string	getName() const;
        bool		getSigned() const;
        int			getGradeToSign() const;
        int			getGradeToExecute() const;
        void		beSigned(const Bureaucrat &bureaucrat);
        void        sginForm(const Bureaucrat &bureaucrat) const;
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
};

std::ostream	&operator<<(std::ostream &out, const Form &form);

