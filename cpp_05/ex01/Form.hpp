/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:31:27 by otaraki           #+#    #+#             */
/*   Updated: 2024/02/29 11:08:17 by otaraki          ###   ########.fr       */
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
    // constructors && destructors
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(const Form &copy);
        virtual ~Form();
        Form	&operator=(const Form &copy);
        
    // getters && setters
        std::string	getName() const;
        bool		getSigned() const;
        int			getGradeToSign() const;
        int			getGradeToExecute() const;

    // member functions        
        void		beSigned(const Bureaucrat &bureaucrat);
        void        sginForm(const Bureaucrat &bureaucrat) const;

    // exceptions
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

