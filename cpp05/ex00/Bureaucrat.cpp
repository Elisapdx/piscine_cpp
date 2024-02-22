/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:02:56 by elisa             #+#    #+#             */
/*   Updated: 2024/02/19 14:25:11 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(150) {
	
	std::cout << "Bureaucrat default constructor called for " << "\033[31m" << this->getname() << "\033[0m" <<
	" with grade of " << this->getgrade() << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name) {
	
	std::cout << "Bureaucrat constructor called for " << "\033[31m" << this->getname() << "\033[0m"<< 
	" with grade of " << grade << std::endl;
	
	const int i = grade;

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

int Bureaucrat::getgrade() {
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

Bureaucrat::~Bureaucrat() {
	
	std::cout << "Bureaucrat destructor for " << "\033[31m" << this->getname() << "\033[0m"<< " called " << std::endl;
	
}

std::ostream&	operator<<(std::ostream &out, Bureaucrat *target)
{
	out << target->getname() << ", bureaucrat grade of " << target->getgrade();
	return (out);
}