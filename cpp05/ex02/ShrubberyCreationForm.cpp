/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:47:33 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/19 16:13:03 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm::AForm("robotomy request", 72, 45), _target(target) {
	
	std::cout << "ShrubberyCreationForm constructor called for " << "\033[31m" << this->getTarget() << "\033[0m" << std::endl;
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) {
	
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	this->_target = copy._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
	
	std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
	if (this == &copy)
		return (*this);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	
	std::cout << "ShrubberyCreationForm destructor for " << "\033[31m" << this->getTarget() << "\033[0m"<< " called " << std::endl;
	
}

std::string ShrubberyCreationForm::getTarget() const {
	return (this->_target);
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	std::string str;
	
	if ((int) executor.getgrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	if (!this->getIsSignedBool())
		throw ShrubberyCreationForm::NotSigned();
	std::ofstream out(this->getTarget() + "_shrubbery");
	str = "   W       A\n  WWW     AAA\n WWWWW   AAAAA\n  |||     |||\n \n    w \n   www \n  wwwww \n wwwwwww \n   |||  \n";
	out << str;
	out.close();
	std::cout << "The ascii trees were written in the file " << this->getTarget() << "_shrubbery" << std::endl;
}
