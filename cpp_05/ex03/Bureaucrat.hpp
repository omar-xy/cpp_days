/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:43:55 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/15 21:21:13 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include <string>

class AForm;

class Bureaucrat
{
    private:
        std::string const	_name;
        int					_grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        virtual ~Bureaucrat();
        Bureaucrat	&operator=(const Bureaucrat &copy);
        std::string	getName() const;
        int			getGrade() const;
        void		incrementGrade();
        void		decrementGrade();
        void        signForm(AForm &form) const;
        void        executeForm(AForm const & form) const;
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);



