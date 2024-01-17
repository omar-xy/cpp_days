/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:05:12 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/17 04:29:02 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>



ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 145, 137), _target("Default")
{
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
    *this = copy;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    // if (this != &copy)
    //     _target = copy._target;
(void)copy;
    return (*this);
}


std::string	ShrubberyCreationForm::getTarget() const
{
    return (_target);
}


void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getGradeToExecute())
        throw AForm::GradeTooLowException();
    else if (!getSigned())
        throw AForm::NotSignedException();
    std::ofstream	outFile;
    std::string		fileName = _target + "_shrubbery";
    outFile.open(fileName.c_str());
    if (outFile.is_open())
    {
        outFile << "      /\\      " << std::endl;
        outFile << "     /\\*\\     " << std::endl;
        outFile << "    /\\O\\*\\    " << std::endl;
        outFile << "   /*/\\/\\/\\   " << std::endl;
        outFile << "  /\\O\\/\\*\\/\\  " << std::endl;
        outFile << " /\\*\\/\\*\\/\\/\\ " << std::endl;
        outFile << "/\\O\\/\\/*/\\/O/\\" << std::endl;
        outFile << "      ||      " << std::endl; 
        outFile << "      ||      " << std::endl;
        outFile << "      ||      " << std::endl;
        outFile << std::endl;
        outFile << "      ||      " << std::endl;
        outFile << "    \\****/    " << std::endl;
        outFile << "     \\**/     " << std::endl;
        outFile << "      \\/      " << std::endl;
        outFile << std::endl;
        outFile << "      /\\      " << std::endl;
        outFile << "     /\\*\\     " << std::endl;
        outFile << "    /\\O\\*\\    " << std::endl;
        outFile << "   /*/\\/\\/\\   " << std::endl;
        outFile << "  /\\O\\/\\*\\/\\  " << std::endl;
        outFile << " /\\*\\/\\*\\/\\/\\ " << std::endl;
        outFile << "/\\O\\/\\/*/\\/O/\\" << std::endl;
        outFile << "      ||      " << std::endl;
        outFile << "      ||      " << std::endl;
        outFile << "      ||      " << std::endl;
        outFile << std::endl;
        outFile << "      ||      " << std::endl;
        outFile << "    \\****/    " << std::endl;
        outFile << "     \\**/     " << std::endl;
        outFile << "      \\/      " << std::endl;
        outFile.close();
    }
}

