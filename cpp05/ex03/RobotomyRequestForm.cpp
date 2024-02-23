/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:42:14 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/22 20:42:16 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm::AForm("robotomy request", 72, 45), _target(target) {
	
	std::cout << "RobotomyRequestForm constructor called for " << "\033[31m" << this->getTarget() << "\033[0m" << std::endl;
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) {
	
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	this->_target = copy._target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
	
	std::cout << "RobotomyRequestForm assignation operator called" << std::endl;
	if (this == &copy)
		return (*this);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	
	std::cout << "RobotomyRequestForm destructor for " << "\033[31m" << this->getTarget() << "\033[0m"<< " called " << std::endl;
	
}

std::string RobotomyRequestForm::getTarget() const{
	return (this->_target);
}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	if ((int) executor.getgrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	if (!this->getIsSignedBool())
		throw AForm::NotSigned();
	std::cout << "Some drilling noises were heard" << std::endl;

	srand(time(0));
	if (rand() % 2)
		std::cout << this->getTarget() << " be robotomized successfully once in two !" << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;
}
