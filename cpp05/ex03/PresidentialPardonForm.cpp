/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:41:27 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/22 20:41:29 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm::AForm("presidential pardon", 25, 5), _target(target) {
	
	std::cout << "PresidentialPardonForm constructor called for " << "\033[31m" << this->getTarget() << "\033[0m" << std::endl;
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) {
	
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	this->_target = copy._target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
	
	std::cout << "PresidentialPardonForm assignation operator called" << std::endl;
	if (this == &copy)
		return (*this);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	
	std::cout << "PresidentialPardonForm destructor for " << "\033[31m" << this->getTarget() << "\033[0m"<< " called " << std::endl;
	
}

std::string PresidentialPardonForm::getTarget() const {
	return (this->_target);
}

void PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	if ((int) executor.getgrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	if (!this->getIsSignedBool())
		throw AForm::NotSigned();
	std::cout << this->getTarget() << " be pardoned by Zaphod Beeblebrox.!" << std::endl;
}
