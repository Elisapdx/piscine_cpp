/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:39:54 by epraduro          #+#    #+#             */
/*   Updated: 2024/02/22 21:22:35 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdio.h>

Bureaucrat::Bureaucrat(): _name("default"), _grade(150) {
	
	std::cout << "Bureaucrat default constructor called for " << "\033[31m" << this->getname() << "\033[0m" <<
	" with grade of " << this->getgrade() << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade) {
	
	std::cout << "Bureaucrat constructor called for " << "\033[31m" << this->getname() << "\033[0m" <<
	" with grade of " << this->getgrade() << std::endl;
	
	const int i = this->getgrade();

	if (i > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (i < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy) {
	
	std::cout << "Bureaucrat assignation operator called" << std::endl;
	(std::string) this->_name = copy._name;
	this->_grade = copy._grade;
	return (*this);
}

int Bureaucrat::getgrade() const {
	return (this->_grade);
}

std::string Bureaucrat::getname() {
	return (this->_name);
}

void Bureaucrat::downgrade() {
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
	return ;
}

void Bureaucrat::upgrade() {
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
	return ;
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

void Bureaucrat::signForm(AForm *signer) {

	signer->beSigned(*this);

	try {
		if (signer->getIsSignedBool())
			std::cout << this->getname() << " signed " << signer->getname() << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << this->getname() << " couldn't sign " << signer->getname() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	form.execute(*this);
	std::cout << this->getname() << " execute " << form.getname() << std::endl;
}

Bureaucrat::~Bureaucrat() {
	
	std::cout << "Bureaucrat destructor for " << "\033[31m" << this->getname() << "\033[0m"<<  " called " << std::endl;
	
}

std::ostream&	operator<<(std::ostream &out, Bureaucrat *target)
{
	out << target->getname() << ", bureaucrat grade of " << target->getgrade();
	return (out);
}