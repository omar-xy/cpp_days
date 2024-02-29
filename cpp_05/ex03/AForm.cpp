/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:33:27 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/18 23:51:20 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm() : _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
}


AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    
}


AForm::AForm(const AForm &copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
    *this = copy;
}


AForm::~AForm()
{
}


AForm	&AForm::operator=(const AForm &copy)
{
    if (this != &copy)
        _signed = copy._signed;
    return (*this);
}


std::string	AForm::getName() const
{
    return (_name);
}


bool	AForm::getSigned() const
{
    return (_signed);
}


int		AForm::getGradeToSign() const
{
    return (_gradeToSign);
}


int		AForm::getGradeToExecute() const
{
    return (_gradeToExecute);
}



void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw AForm::GradeTooLowException();
    else
        _signed = true;
}

void   AForm::sginForm(const Bureaucrat &bureaucrat) const
{
    if (_signed)
        std::cout << bureaucrat.getName() << " signed " << _name << std::endl;
    else
        std::cout << bureaucrat.getName() << " couldn't sign " << _name << " because Form is not signed" << std::endl;
}

void   AForm::executeCheck(const Bureaucrat &bureaucrat) const
{
    if (!getSigned())
        throw AForm::NotSignedException();
    else if (bureaucrat.getGrade() > _gradeToExecute)
        throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}


const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

const char* AForm::NotSignedException::what() const throw()
{
    return ("Form is not signed");
}

const char* AForm::FailedToOpenFileException::what() const throw()
{
    return ("Failed to open file");
}

std::ostream	&operator<<(std::ostream &out, const AForm &AForm)
{
    out << "AForm " << AForm.getName() << " is ";
    if (AForm.getSigned())
        out << "signed";
    else
        out << "not signed";
    out << " and requires grade " << AForm.getGradeToSign() << " to sign and grade " << AForm.getGradeToExecute() << " to execute";
    return (out);
}

