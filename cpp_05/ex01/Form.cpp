/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:33:27 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/14 14:14:31 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form() : _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
}


Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}


Form::Form(const Form &copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
    *this = copy;
}


Form::~Form()
{
}


Form	&Form::operator=(const Form &copy)
{
    if (this != &copy)
        _signed = copy._signed;
    return (*this);
}


std::string	Form::getName() const
{
    return (_name);
}


bool	Form::getSigned() const
{
    return (_signed);
}


int		Form::getGradeToSign() const
{
    return (_gradeToSign);
}


int		Form::getGradeToExecute() const
{
    return (_gradeToExecute);
}



void	Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    else
        _signed = true;
}

void   Form::sginForm(const Bureaucrat &bureaucrat) const
{
    if (_signed)
        std::cout << bureaucrat.getName() << " signed " << _name << std::endl;
    else
        std::cout << bureaucrat.getName() << " couldn't sign " << _name << " because form is not signed" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}


const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}



std::ostream	&operator<<(std::ostream &out, const Form &form)
{
    out << "Form " << form.getName() << " is ";
    if (form.getSigned())
        out << "signed";
    else
        out << "not signed";
    out << " and requires grade " << form.getGradeToSign() << " to sign and grade " << form.getGradeToExecute() << " to execute";
    return (out);
}

